/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>
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
  std::cout << "Looking at the helpful Passenger you feel a sense of hope.\n";
    std::cout << "1. Ask the Helpful Passenger for help.\n"
                "2. Turn away.\n"
                "3. Help\n4. Inventory\n5. Quit\n";
    while (true) {
    int choice;
    choice = pInput(3);
        if (choice < 1 || choice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (choice == 2) {
            std::cout << " You looked at the helpful "
            "Passenger but decided to look away\n";
            break;
        } else {
            solution();
            break;
        }
    }
}

bool helpfullPassengerPuzzle::failPuzzle() {
    std::cout << "You failed!\n"; 
    return true;
}

bool helpfullPassengerPuzzle::solution() {
    std::cout << "\033[32mPlayer:\033[0m You ask the Helpful "
    "Passenger for help.\n";
    HP->displayDialogue(0);
    std::cout << "\033[32mPlayer:\033[0m Yes I do. I need to win "
    "this gambling game.\n";
    HP->displayDialogue(1);
    std::cout << "\033[32mPlayer:\033[0m What? How does "
    "that even help me?\n"
    "Before you could realise what is going on"
    " the Helpful Passenger is gone.\n";
    remPuzzle("Talk to HelpfulPassenger");
    return true;
}
