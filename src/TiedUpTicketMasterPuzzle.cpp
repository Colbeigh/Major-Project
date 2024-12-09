/**
 * @author Nikita Evtushenko<nikita.evtushenko@uleth.ca>
 * @date Fall 2024
 */
#include "Puzzle.hpp"

tiedUpTicketMasterPuzzle::tiedUpTicketMasterPuzzle() : TM(nullptr) {
    TM = new tiedUpTicketMaster;
}

tiedUpTicketMasterPuzzle::~tiedUpTicketMasterPuzzle() {
    delete TM;
}

void tiedUpTicketMasterPuzzle::event() {
    std::cout << "Looking around the armory you hear a strage noise\n";
    std::cout << "Player: Is there someone in here?\n";
    TM->displayDialogue(0);
    std::cout << "You hear a faint noice in the corner of the armory\n" 
                "Getting closer to the source of the noise you see a person tied up\n";  
    std::cout << "You crouch closer to the person to realise it's the Ticket Master\n";
    std::cout << "1. Untine the Ticket Master\n"
                "2. Leave the Ticket Master\n";
    while (true) {
        int choice = pInput(2);
        if (choice < 1 || choice > 2) { 
            std::cout << "Pick between 1 or 2" << std::endl;
        } else if (choice == 1) { 
            failPuzzle();
            break;
        } else {
            solution();
            break;
        }
    }
}

bool tiedUpTicketMasterPuzzle::failPuzzle() {
    std::cout << "You leave the Ticket Master tied up\n";
    TM->displayDialogue(2); 
    std::cout << "You walk away from the Ticket Master\n";

    return true;
}
