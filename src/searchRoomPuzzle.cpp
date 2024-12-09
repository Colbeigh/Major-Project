/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

searchRoomPuzzle::searchRoomPuzzle() {
}

searchRoomPuzzle::~searchRoomPuzzle() {
}

void searchRoomPuzzle::event()  {
std::cout << "You got away\n" <<
"You take a breath and check the paper you picked up\n" <<
p.getDesc("PieceOfPaper") <<
"\nThis must be the luggage number\n"
"\n1. Goto Luggage\n2. Leave it be.\n"
"3. Help\n4. Inventory\n5. Quit\n";
    while (true) {
    int choice;
        choice = pInput(3);
        if (choice < 1 || choice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (choice == 1) {
            solution();
            break;
            } else {
            failPuzzle();
            break;
            }
    }
}

bool searchRoomPuzzle::failPuzzle()  {
std::cout << "You chose to not goto the luggage.\n";
std::cout << "You end up doing nothing and the train explodes\n";
  // Dramatically print "YOU BLEW UP" one letter at a time
    std::string message = "YOU BLEW UP";
    for (char c : message) {
        std::cout << "\033[31;5m" << c << "\033[0m" << std::flush; // Red blinking text
        std::this_thread::sleep_for(std::chrono::milliseconds(300)); // 300ms delay per letter
    }
    std::cout << "\n";

    // Delay after the "YOU DIED" message
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Clear screen again
    std::cout << "\033[2J\033[H";
p.setKill();
return false;
}

bool searchRoomPuzzle::solution()  {
std::cout << "You decide to go look for the luggage\n";
p.remItem("PieceOfPaper");
remPuzzle("Catch a breath");
addPuzzle("Approach the luggage");
return true;
}
