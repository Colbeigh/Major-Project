/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

fakeDoorPuzzle::fakeDoorPuzzle() {
}

fakeDoorPuzzle::~fakeDoorPuzzle() {
}

void fakeDoorPuzzle::event()  {
std::cout << "Would you like to move to a new cart?\n"
"1.Yes \n2. No, not yet.\n"
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

bool fakeDoorPuzzle::failPuzzle()  {
    std::cout << "You decided you weren't ready yet.\n";
    std::cout << "But the ticket master didn't like that\n";
    std::cout << "The ticket master then hits on the head with a metal pipe\n";
    // Dramatically print "YOU DIED" one letter at a time
    std::string message = "YOU DIED";
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

bool fakeDoorPuzzle::solution()  {
    std::cout << "You put your hand on the door and right before you open it\n"
    "The ticket master hits you on the head with a metal pipe\n";
    std::cout << "You turn around to shoot him with the pistol he gave you\n"
    "But you realize it's a fake gun after trying to shoot him twice.\n";
    std::cout << "The ticket master laughs at you and kills you\n";
    // Dramatically print "YOU DIED" one letter at a time
    std::string message = "YOU DIED";
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
    return true;
}
