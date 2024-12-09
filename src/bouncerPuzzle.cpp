/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

bouncerPuzzle::bouncerPuzzle(): B(nullptr) {
    B = new bouncer;
    help = "Talk to the Rich Lady for the ticket\n";
}

bouncerPuzzle::~bouncerPuzzle() {
delete B;
}

void bouncerPuzzle::event() {
    std::cout << "You approach the Bouncer\n";
    B->displayDialogue(2);
    std::cout << "\nWhat would you like to do?\n";
        if (p.hasItem("GamblingTicket") == false) {
            failPuzzle();
            return;
        } else {
            std::cout << "1. Give him the ticket.\n"
            "2. Do not give him the ticket.\n" <<
            "3. Help\n"
            "4. Inventory\n"
            "5. Quit\n";
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
}

bool bouncerPuzzle::failPuzzle() {
    std::cout << "What ticket?\n";
    B->displayDialogue(0);
    std::cout << "\n";
    return false;
}

bool bouncerPuzzle::solution() {
    std::cout << "You give him the Gambling ticket\n";
    p.remItem("GamblingTicket");
    B->displayDialogue(1);
    std::cout << "\n";
    env = true;
    return true;
}
