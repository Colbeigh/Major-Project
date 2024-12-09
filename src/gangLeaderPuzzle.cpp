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
    std::cout << "Nothing happens\n\033[32mPlayer:\033[0m Well this was lame\n";
    // Dramatically print "YOU WIN" one letter at a time
    std::cout << "\033[32;5m" << "YOU WIN" << "\033[0m" << std::endl;
    p.setKill();
    return true;
}

bool gangLeaderPuzzle::failPuzzle() {
    GL->displayDialogue(0);
    std::cout << "As he finishes repeating himself the train explodes\n";
    std::cout << "\033[31;5m" << "YOU BLEW UP" << "\033[0m" << std::endl;
    p.setKill();
    return true;
}
