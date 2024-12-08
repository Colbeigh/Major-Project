/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

doorPuzzle::doorPuzzle() {
}

doorPuzzle::~doorPuzzle() {
}

void doorPuzzle::startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) {
event();
    if(solution()) {
    env = true;
    }
}

void doorPuzzle::event()  {
std::cout << "Would you like to move to a new cart?"
"1.Yes \n 2. No, not yet.\n";
    int choice;
    while (true) {
        choice = pInput();
        if (choice < 1 || choice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (choice == 1) {
            solution();
            break;
            } else {
            failPuzzle();
            break;
            }
    }
}

bool doorPuzzle::failPuzzle()  {
std::cout << "You decided you weren't ready yet.\n";
return false;
}

bool doorPuzzle::solution()  {
std::cout << "You move to the next cart\n";
return true;
}

void doorPuzzle::giveReward()  {
}

void doorPuzzle::playerCondition() {
    if (failPuzzle() == true){
        p.setKill();
        } else {
            p.setAlive();
    }
}

int doorPuzzle::pInput() {
int playerchoice;
  while(true) {
    std::cin >> playerchoice;
    if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<
            std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please try again.\n";
    } else {
        return playerchoice;
    }
  }
}

// void doorPuzzle::addPuzzle(const std::string& puzzleId) {
// p->push_back(puzzleId);
// }

// bool doorPuzzle::solved(const std::string& puzzleId) {
// if (!p){
//     std::cout << "Puzzle is not initialized";
// }
// for (int i = 0; i < p->size(); ++i) {
//         if (puzzleId == (*p)[i]) {
//             p->erase(p->begin() + i);
//        }
// }
// return true;
// }
