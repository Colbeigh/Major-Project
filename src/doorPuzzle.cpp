/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

doorPuzzle::doorPuzzle() {
}

doorPuzzle::~doorPuzzle() {
}

void doorPuzzle::event()  {
std::cout << "Would you like to move to a new cart?\n"
"1.Yes \n2. No, not yet.\n";
    while (true) {
    int choice;
        choice = pInput(2);
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

bool doorPuzzle::failPuzzle()  {
std::cout << "You decided you weren't ready yet.\n";
return false;
}

bool doorPuzzle::solution()  {
std::cout << "You move to the next cart\n";
env = true;
return true;
}
