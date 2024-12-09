/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>
 * @date Fall 2024
 */
#include "Puzzle.hpp"

gamblingOutlawPuzzle::gamblingOutlawPuzzle() : GO(nullptr) {
    GO = new gamblingOutlaw;
}

gamblingOutlawPuzzle::~gamblingOutlawPuzzle() {
    delete GO;
}

void gamblingOutlawPuzzle::event() {
    std::cout << "Looking at the gambling Out Law you"
    "feel a sense of dread\n";
    std::cout <<"1. Talk to the outlaw\n2. Turn away\n"
    "3. Help\n4. Inventory\n5. Quit\n";
    while (true) {
    int choice;
    choice = pInput(3);
        if (choice < 1 || choice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (choice == 2) {
           std::cout << " You looked at the gambling "
           "outlaw but decided to look away\n";
            break;
        } else {
            solution();
            break;
        }
    }
}

bool gamblingOutlawPuzzle::solution() {
    GO->displayDialogue(0);
    std::cout << "No you must have me mistaken."
    " How about we just focus on the game\n";
    GO->displayDialogue(1);
    std::cout << "You get two dies.\n" 
        "1. roll the dies and see what happens\n"
        "2. Throw the die in the outlaws face\n"
        "3. Throw the die against the wall padding\n";
        while (true) {
        int choice = pInput(4);
        if (choice < 1 || choice > 3) {
            std::cout << "Pick between 1 or 3 " << std::endl;
            return true;
        }

        if (choice == 1) {
            std::cout << "You roll the dies and get a 7\n";
            GO->displayDialogue(2);
            failPuzzle();
            break;
        } else if (choice == 2) {
            std::cout << "You throw the die in the outlaws face\n";
            GO->displayDialogue(3);
            std::cout << "The outlaw gets mad and pulls out a gun"
            " He is holding his face and waving the gun like a madman\n";
            std::cout << "In the act of waving the gun "
            "the outlaw drops a piece of paper"
            " on the floor\n";
            std::cout << "You Run past the outlaw and grab "
            "the piece of paper\n";
            giveReward();
            break;
        } else {
            std::cout << "You throw the die against the wall padding\n";
            GO->displayDialogue(4);
            failPuzzle();
            break;
        }
    }
    remPuzzle("Talk to GambilingOutlaw");
    remPuzzle("Talk to HelpfullPassenger");
    env = true;
    return true;
}
bool gamblingOutlawPuzzle::failPuzzle() {
    std::cout << "You tried playing the game normally. "
    "But instead you kept losing"
    " Now all your life saving are gone.\nGood Job!\n";
    p.setKill();
    return true;
}

void gamblingOutlawPuzzle::giveReward() {
    p.addItem("PieceOfPaper");
}
