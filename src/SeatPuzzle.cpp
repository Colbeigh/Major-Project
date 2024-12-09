/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

SeatPuzzle::SeatPuzzle() {
    help = "Pick a seat\n";
}

SeatPuzzle::~SeatPuzzle() {
}

void SeatPuzzle::event()  {
std::cout << "Would you like to sit towards the front or back?\n"
"1.Front \n2. Back.\n"
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

bool SeatPuzzle::failPuzzle()  {
std::cout << "You sat towards the back.\n";
addPuzzle("Talk to Ticket Master");
remPuzzle("Pick a seat");
return false;
}

bool SeatPuzzle::solution()  {
std::cout << "You sat near the front\n";
addPuzzle("Talk to Ticket Master");
remPuzzle("Pick a seat");
return true;
}
