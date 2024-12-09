/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */
#include "Puzzle.hpp"

gangLeaderPuzzle::gangLeaderPuzzle() : GL(nullptr) {
    GL = new gangLeader;
}

gangLeaderPuzzle::~gangLeaderPuzzle() {
    delete GL;
}

void gangLeaderPuzzle::event() {
    std::cout << "The O'Driscoll leader approaches you\n";
    GL->displayDialogue(0);
    std:: cout << "He rambles on and on\n"
        "What would you like to do?\n";
    std::cout <<"1. Shoot him\n2. Sorry I couldn't hear you\n"
    "3. Help\n4. Inventory\n5. Quit\n";
    while (true) {
    int choice;
    choice = pInput(3);
        if (choice < 1 || choice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (choice == 2) {
            failPuzzle();
            break;
        } else {
            solution();
            break;
        }
    }
}

bool gangLeaderPuzzle::solution() {
    std::cout << "You shoot him and he begins to stumble\n";
    GL->displayDialogue(1);
    std::cout << "He falls straight onto the bomb hitting"
    " the big red button\n";
    std::cout << "Nothing happens\nPlayer: Well this was lame\n";
    // Dramatically print "YOU WIN" one letter at a time
    std::string message = "YOU WIN";
    for (char c : message) {
        std::cout << "\033[32;5m" << c << "\033[0m" << std::flush; // Red blinking text
        std::this_thread::sleep_for(std::chrono::milliseconds(300)); // 300ms delay per letter
    }
    std::cout << "\n";

    // Delay after the "YOU WIN" message
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Clear screen again
    std::cout << "\033[2J\033[H";
    p.setKill();
    return true;
}

bool gangLeaderPuzzle::failPuzzle() {
    GL->displayDialogue(0);
    std::cout << "As he finishes repeating himself the train explodes\n";
      // Dramatically print "YOU BLEW UP" one letter at a time
    std::string message = "YOU BLEW UP";
    for (char c : message) {
        std::cout << "\033[31;5m" << c << "\033[0m" << std::flush; // Red blinking text
        std::this_thread::sleep_for(std::chrono::milliseconds(300)); // 300ms delay per letter
    }
    std::cout << "\n";

    // Delay after the "YOU BLEW UP" message
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Clear screen again
    std::cout << "\033[2J\033[H";
    p.setKill();
    return true;
}
