/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

luggagePuzzle::luggagePuzzle() {
}

luggagePuzzle::~luggagePuzzle() {
}

void luggagePuzzle::event()  {
std::cout << "You approach the luggage and notice a familiar symbol\n"
"It's the O'Driscoll gang! I thought I put them away years ago!\n"
"1. Open the luggage\n 2. Leave it be.\n";
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

bool luggagePuzzle::failPuzzle()  {
std::cout << "You chose to not open the luggage.\n";
remPuzzle("Approach the luggage");
addPuzzle("Go to next cart");
return false;
}

bool luggagePuzzle::solution()  {
std::cout << "The luggage is locked tight\n";
    if (p.hasItem("Quarter")) {
        std::cout << "In rage you throw the lucky quarter at the lock\n" <<
        " and it somehow opens up\n" "Guess the quarter was lucky\n";
    p.remItem("Quarter");
    giveReward();
    }
remPuzzle("Approach the luggage");
addPuzzle("Go to next cart");
return true;
}

void luggagePuzzle::giveReward()  {
    p.addItem("Plans");
}

