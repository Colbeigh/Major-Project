/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>
 * @date Fall 2024
 */
#include "Puzzle.hpp"

gambilingOutlawPuzzle::gambilingOutlawPuzzle() : GO(nullptr) {
}

gambilingOutlawPuzzle::~gambilingOutlawPuzzle() {
    delete GO;
}

void gambilingOutlawPuzzle::event() {
    std::cout << "You approach the Gambiling Outlaw.\n" <<
    "You notice the outlaw holding a ticket.\n";
    std::cout << "What would you like to do?\n" <<
    "1. Ask the Gambiling Outlaw for help.\n"
    "2. Try to steal ticket.\n";
    while (true) {
    int choice;
    choice = pInput();
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

bool gambilingOutlawPuzzle::failPuzzle() {
    std::cout << "Blank\n";
    GO->displayDialogue(3);
    std::cout << "BlankText\n";
    p.setKill();
    // while (true) {
    // int choice;
    // choice = pInput();
    //   if (choice < 1 || choice > 1) {
    //     std::cout <<"You only have one choice!"<< std::endl;
    //   } else {
    //         p.addItem("BlankText");
    //         std::cout << "Blank";
    //         break;
    //     }
    // }
    return true;
}

bool gambilingOutlawPuzzle::solution() {
    std::cout << "Blank\n";
    GO->displayDialogue(0);
    std::cout << "Blank\n";
    GO->displayDialogue(1);
}

void gambilingOutlawPuzzle::giveReward() {
    p.addItem("BlankText");
}