/**
 * @author Nikita Evtushenko<nikita.evtushenko@uleth.ca>
 * @date Fall 2024
 */
#include "Puzzle.hpp"

tiedUpTicketMasterPuzzle::tiedUpTicketMasterPuzzle() : TM(nullptr) {
    TM = new tiedUpTicketMasterPuzzle;
}

tiedUpTicketMasterPuzzle::~tiedUpTicketMasterPuzzle() {
    delete A;
}

void tiedUpTicketMasterPuzzle::event() {
    std::cout << "You approach the armory\n";
    A->displayDialogue(0);
    std::cout << "\nWhat would you like to do?\n";
    if (p.hasItem("Quarter") == false) {
        failPuzzle();
        return;
    } else {
        std::cout << "1. Give him the Quarter.\n"
        "2. Do not give him the Quarter.\n";
        while (true) {
        int choice;
        choice = pInput(2);
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
}