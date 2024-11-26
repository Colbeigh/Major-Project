/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

  sweetTalkPuzzle::sweetTalkPuzzle(): p(nullptr), RL(nullptr), chest(nullptr) {
    RL = new richLady;
    chest = new Inventory;
  }

  sweetTalkPuzzle::~sweetTalkPuzzle() {
    delete RL;
    delete chest;
  }

  void sweetTalkPuzzle::startPuzzle(Player *player,
  std::vector<std::string >* puzzles, bool* changeenv) {
    p = puzzles;
    event(player);
  }

  void sweetTalkPuzzle::event(Player* player) {
    int playerchoice;
    std::cout << "You approach the Rich Lady.\n" <<
    "You notice the lady holding a ticket.\n";
    std::cout << "What would you like to do?\n" <<
    "1. Sweet talk the Rich Lady.\n 2. Try to steal ticket.\n";
    while (true) {
        std::cin >> playerchoice;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<
            std::streamsize>::max(), '\n');
            std::cout <<"Please pick between 1 or 2 \n";
        } else if (playerchoice < 1 || playerchoice > 2) {
                std::cout << "Pick between 1 or 2 " << std::endl;
        } else if (playerchoice == 1) {
            solution(player);
            break;
            } else {
            failPuzzle(player);
            break;
            }
    }
  }

  void sweetTalkPuzzle::failPuzzle(Player* player) {
    std::cout << "You try to steal the ticket and the coin but failed.\n";
    RL->displayDialogue(3);
    std::cout << "You watch her storm off and drop the ticket\n" <<
    "What would you like to do?\n";
    int playerchoice;
     while (true) {
        std::cin >> playerchoice;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<
            std::streamsize>::max(), '\n');
            std::cout <<"You only have one choice!";
        } else if (playerchoice < 1 || playerchoice > 1) {
                std::cout << "Enter 1 " << std::endl;
        } else {
            player->addItem("GamblingTicket");
            std::cout << "You pick up the ticket\n";
            break;
            }
    }
    solved("Talk to Rich Lady");
  }

  void sweetTalkPuzzle::solution(Player* player) {
    std::cout << "You decided to sweet talk the Rich Lady\n";
    RL->displayDialogue(0);
    std::cout << "She hands you the ticket and her lucky coin\n";
    RL->displayDialogue(1);
    giveReward(player);
    solved("Talk to Rich Lady");
  }

  void sweetTalkPuzzle::giveReward(Player* player) {
    player->addItem("GamblingTicket");
    player->addItem("LuckyCoin");
  }

  void sweetTalkPuzzle::addPuzzle(const std::string& puzzleId) {
  }

  bool sweetTalkPuzzle::solved(const std::string& puzzleId) {
     if (!p){
    std::cout << "Puzzle is not initialized";
 }
    for (int i = 0; i < p->size(); ++i) {
       if (puzzleId == (*p)[i]) {
           p->erase(p->begin() + i);
      }
  }
    return true;
  }
