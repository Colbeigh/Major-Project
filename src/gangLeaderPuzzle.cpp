/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */
#include "Puzzle.hpp"

gangLeaderPuzzle::gangLeaderPuzzle() : GL(nullptr) {
    GL = new gangLeader;
}

gangLeaderPuzzle::~gangLeaderPuzzle() {
    delete GL;
}

void gangLeaderPuzzle::event() {
    std::cout << "The O'Driscoll leader approaches you\n";
    GL->displayDialogue(0);
    std:: cout << "He rambles on and on\n"
        "What would you like to do?\n";
    std::cout <<"1. Shoot him\n" 
                "2. Let him ramble\n";
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

bool gangLeaderPuzzle::solution() {
    std::cout << "You shoot him and he begins to stumble\n";
    GL->displayDialogue(1);
    std::cout << "He falls off the train and dies\n";
    remPuzzle("Approach the Gang Leader");
    addPuzzle("Defuse the bomb");
    return true;
}

bool gangLeaderPuzzle::failPuzzle() {
    std::cout << "He talks your ear off until the train explodes";
    p.setKill();
    return true;
}

void gangLeaderPuzzle::giveReward() {}