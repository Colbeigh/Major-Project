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
                "Getting closer to the source of the "
                "noise you see a person tied up\n";
    std::cout << "You crouch closer to the person to "
                 "realise it's the Ticket Master\n";
    std::cout << "1. Untie the Ticket Master\n"
                "2. Leave the Ticket Master\n"
                "3. Help\n4. Inventory\n5. Quit\n";
    while (true) {
        int choice = pInput(3);
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

bool tiedUpTicketMasterPuzzle::solution(){
    std::cout << "You decide to leave the ticket master tied up\n";
    std::cout << "You start looking around the armory\n"
                "After some time of searching around\n";
    std::cout << "Player: I give up! I can't find anything\n";
    std::cout << "In frustration you punch a box above you\n";
    std::cout << "The box falls down and hits you on the head\n";
    std::cout << "Player: Ouch! That hurt\n";
    std::cout << "While rubbing your head you see a gun sticking out the box\n";
    std::cout << "Player: wow! must be my lucky day\n";
    giveReward();
    remPuzzle("Look around the armory");
    addPuzzle("Go to next cart");

    return true;
    }

bool tiedUpTicketMasterPuzzle::failPuzzle() {
    std::cout << "You decide to help the ticket master\n";
    TM->displayDialogue(2);
    std::cout << "Player: I couldn't leave you here\n";
    TM->displayDialogue(3);
    std::cout << "Player: First We need to arm ourselves\n"  
                "Player: Lets look around the armory and find a gun\n";
    std::cout << "You look around the armory\n"
                "After looking for a while you couldn't find anything\n";
    TM->displayDialogue(4);
    std::cout << "You look at what the ticket master is holding in his hands\n"
                "That looks like a gun\n";
    std::cout << "Player: Yes! That is exactly what I was looking for\n";
    std::cout << "You take the gun from the ticket master\n";
    p.addItem("Fakegun");
    std::cout << "Player: Thank you\n";
    std:: cout << "Player: We should get going. And stop these outlaws!\n";
    remPuzzle("Look around the armory");
    addPuzzle("Leave the Armory");
    return true;
}

void tiedUpTicketMasterPuzzle::giveReward() {
    p.addItem("Gun");
}
