/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>alignas
 * @date Fall 2024
 */

#include "Puzzle.hpp"

helpfullPassengerPuzzle::helpfullPassengerPuzzle(): HP(nullptr) {
}

helpfullPassengerPuzzle::~helpfullPassengerPuzzle() {
   delete HP;
}

void helpfullPassengerPuzzle::event() {
  std::cout << "You approach the Helpfull Passenger.\n" <<
    "You notice the passenger holding a ticket.\n";
  std::cout << "What would you like to do?\n" <<
    "1. Ask the Helpfull Passenger for help.\n"
    "2. Try to steal ticket.\n";
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

bool helpfullPassengerPuzzle::failPuzzle() {
    std::cout << "You try to steal the ticket and the coin but failed.\n";
    HP->displayDialogue(3);
    std::cout << "You watch her storm off and drop the ticket\n" <<
    "What would you like to do?\n";
    while (true) {
    int choice;
    choice = pInput(2);
      if (choice < 1 || choice > 1) {
        std::cout <<"You only have one choice!"<< std::endl;
      } else {
            p.addItem("GamblingTicket");
            std::cout << "You pick up the ticket\n";
            break;
        }
    }
    return true;
}

bool helpfullPassengerPuzzle::solution() {
    std::cout << "You ask the Helpfull Passenger for help.\n";
    HP->displayDialogue(1);
    std::cout << "You watch her storm off and drop the ticket\n" <<
    "What would you like to do?\n";
    while (true) {
    int choice;
    choice = pInput(2);
      if (choice < 1 || choice > 1) {
        std::cout <<"You only have one choice!"<< std::endl;
      } else {
            p.addItem("GamblingTicket");
            std::cout << "You pick up the ticket\n";
            break;
        }
    }
    return true;
}

void helpfullPassengerPuzzle::giveReward()  {
}