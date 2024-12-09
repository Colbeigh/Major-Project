/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

sweetTalkPuzzle::sweetTalkPuzzle(): RL(nullptr) {
  RL = new richLady;
}

sweetTalkPuzzle::~sweetTalkPuzzle() {
  delete RL;
}

void sweetTalkPuzzle::event() {
  std::cout << "You approach the Rich Lady.\n" <<
    "You notice the lady holding a ticket.\n";
  std::cout << "What would you like to do?\n" <<
    "1. Sweet talk the Rich Lady.\n 2. Try to steal ticket.\n"
    "3. Help\n4. Inventory\n5. Quit\n";
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

bool sweetTalkPuzzle::failPuzzle() {
    std::cout << "You try to steal the ticket and the coin but failed.\n";
    RL->displayDialogue(2);
    std::cout << "\nYou watch her storm off and drop the ticket\n" <<
    "What would you like to do?\n" "1. Grab ticket\n";
    while (true) {
    int choice;
    choice = pInput(3);
      if (choice < 1 || choice > 1) {
        std::cout <<"You only have one choice!\n"<< std::endl;
      } else {
            p.addItem("GamblingTicket");
            std::cout << "You pick up the ticket\n";
            remPuzzle("Talk to Rich Lady");
            break;
        }
    }
    return true;
}


bool sweetTalkPuzzle::solution() {
    std::cout << "You decided to sweet talk the Rich Lady\n";
    RL->displayDialogue(0);
    std::cout << "\nShe hands you the ticket and her lucky coin\n";
    RL->displayDialogue(1);
    std::cout << "\n";
    giveReward();
    remPuzzle("Talk to Rich Lady");
    return true;
}

void sweetTalkPuzzle::giveReward() {
    p.addItem("GamblingTicket");
    p.addItem("Quarter");
}
