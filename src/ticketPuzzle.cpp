/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

ticketPuzzle::ticketPuzzle() {
    TM = new ticketMaster;
}

ticketPuzzle::~ticketPuzzle() {
    delete TM;
}

bool ticketPuzzle::failPuzzle() {
    std::cout << "You refuse to give him the ticket and\n" <<
    " Ticket Master leaves you alone." <<
    " A few minutes later the train explodes.\n";
    p.setKill();
    return true;
}

bool ticketPuzzle::solution() {
    p.listItem();
    if(p.hasItem("Ticket") == true ) {
    std::cout << "You give him the ticket\n";
    p.remItem("Ticket");
    std::cout <<"You watch him punch the ticket and hands back it to you\n";
    giveReward();
    TM->displayDialogue(1);
    std::cout << "\nYou notice something strange about the ticket.\n" <<
    "On the back of the ticket, 'HELP' is written.\n" <<
    "You look up and Ticket Master has already left\n";
    } else {
        std::cout << "Player does not have the item.\n";
    return false;
        }
        remPuzzle("Talk to Ticket Master");
        addPuzzle("Go to next cart");
        return true;
}

void ticketPuzzle::event() {
    std::cout << "The Ticket Master approaches you\n";
    TM->displayDialogue(0);
    std::cout <<"\nWhat would you like to do?\n"<<
    "1. Give him the ticket.\n 2. Do not give him the ticket.\n";
    while (true) {
    int choice;
    choice = pInput(3);
        if (choice < 1 || choice > 2 ) {
            std::cout << "Please pick between 1 or 2\n";
        } else if (choice == 2) {
            failPuzzle();
            break;
        } else {
            solution();
            break;
        }
    }
}


void ticketPuzzle::giveReward() {
    p.addItem("PunchedTicket");
}
