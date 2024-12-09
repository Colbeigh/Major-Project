/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>alignas
 * @date Fall 2024
 */

#include "Puzzle.hpp"

helpfullPassengerPuzzle::helpfullPassengerPuzzle(): HP(nullptr) {
    HP = new helpfullPassenger;
}

helpfullPassengerPuzzle::~helpfullPassengerPuzzle() {
   delete HP;
}

void helpfullPassengerPuzzle::event() {
  std::cout << "Looking at the helpfull Passenger you feel a sense of hope.\n";
    std::cout << "1. Ask the Helpfull Passenger for help.\n"
                "2. Turn away.\n";
    while (true) {
    int choice;
    choice = pInput(3);
        if (choice < 1 || choice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (choice == 2) {
            std::cout << " You looked at the helpfull Passenger but decided to look away\n";
            break;
        } else {
            solution();
            break;
        }
    }
}

bool helpfullPassengerPuzzle::failPuzzle() {
    std::cout << ".\n";
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
    std::cout << "Player: You ask the Helpfull Passenger for help.\n";
    HP->displayDialogue(0);
    std::cout << "Player: Yes I do. I need to win this gambling game.\n";
    HP->displayDialogue(1);
    std::cout << "Player: What? How does that even help me?\n"
    "Before you could realise what is going on"
    " the Helpfull Passenger is gone.\n";
    remPuzzle("Talk To HelpfullPassenger");
    return true;
}

void helpfullPassengerPuzzle::giveReward() {
}