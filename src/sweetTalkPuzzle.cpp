/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

sweetTalkPuzzle::sweetTalkPuzzle(): RL(nullptr) {
}

sweetTalkPuzzle::~sweetTalkPuzzle() {
   delete RL;
}

void sweetTalkPuzzle::startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) {
p = player;
puzz = puzzles;
env = changeenv;
RL = new richLady;
event();
}

void sweetTalkPuzzle::event() {
  std::cout << "You approach the Rich Lady.\n" <<
    "You notice the lady holding a ticket.\n";
  std::cout << "What would you like to do?\n" <<
    "1. Sweet talk the Rich Lady.\n 2. Try to steal ticket.\n";
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

bool sweetTalkPuzzle::failPuzzle() {
    std::cout << "You try to steal the ticket and the coin but failed.\n";
    RL->displayDialogue(3);
    std::cout << "You watch her storm off and drop the ticket\n" <<
    "What would you like to do?\n";
    while (true) {
    int choice;
    choice = pInput();
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


bool sweetTalkPuzzle::solution() {
    std::cout << "You decided to sweet talk the Rich Lady\n";
    RL->displayDialogue(0);
    std::cout << "She hands you the ticket and her lucky coin\n";
    RL->displayDialogue(1);
    giveReward();
    return true;
}

void sweetTalkPuzzle::giveReward() {
    p.addItem("GamblingTicket");
    p.addItem("LuckyCoin");
}

void sweetTalkPuzzle::playerCondition() {
    if (failPuzzle() == true){
        p.setKill();
        } else {
            p.setAlive();
    }
}

int sweetTalkPuzzle::pInput() {
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




  // void sweetTalkPuzzle::addPuzzle(const std::string& puzzleId) {
  // }
  // bool sweetTalkPuzzle::solved(const std::string& puzzleId) {
  //    if (!p) {
  //   std::cout << "Puzzle is not initialized";
  //   }
  //   for (int i = 0; i < p->size(); ++i) {
  //      if (puzzleId == (*p)[i]) {
  //          p->erase(p->begin() + i);
  //     }
  // }
  //   return true;
  // }
