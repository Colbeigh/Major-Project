/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>
 * @date Fall 2024
 */
#include "Puzzle.hpp"

gambilingOutlawPuzzle::gambilingOutlawPuzzle() : GO(nullptr) {
    GO = new gambilingOutlaw;
}

gambilingOutlawPuzzle::~gambilingOutlawPuzzle() {
    delete GO;
}

void gambilingOutlawPuzzle::event() {
    std::cout << "Approching the outlaw you feel bad enegry coming off of him\n";
    std::cout << "What would you like to do?\n" <<
    "1. Talk to the outlaw\n"
    "2. Turn away\n";
    while (true) {
    int choice;
    choice = pInput(2);
        if (choice < 1 || choice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (choice == 2) {
           std::cout << " You looked at the gambling outlaw but decided to look away\n";
            break;
        } else {
            solution();
            break;
        }
    }
}

bool gambilingOutlawPuzzle::solution() {
    GO->displayDialogue(0);
    std::cout << "No you must have me mistaken. How about we just focus on the game\n";
    GO->displayDialogue(1);
    std::cout << "You get two dies.\n" 
        "1. roll the dies and see what happens\n"
        "2. Throw the die in the outlaws face\n";
        "3. Thow the die against the wall padding\n";
        while (true) {
        int choice = pInput(3);
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
            std::cout << "In the act of waving the gun the outlaw drops a piece of paper"
            " on the floor\n";
            std::cout << "You Run past the outlaw and grab the piece of paper\n"; 
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
    addPuzzle("Go to next cart");
    return true;
}
bool gambilingOutlawPuzzle::failPuzzle() {
    std::cout << "You tried playing the game normaly. But instead you kept loosing"
    "Now all your life saving are gone. Good Job!";
    p.setKill();
    return true;
}

void gambilingOutlawPuzzle::giveReward() {
    p.addItem("PieceOfPaper");
}