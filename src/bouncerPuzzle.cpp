/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

bouncerPuzzle::bouncerPuzzle(): p(nullptr), change(nullptr) {
B = new bouncer;
chest = new Inventory;
}

bouncerPuzzle::~bouncerPuzzle() {
delete B;
delete chest;
}

void bouncerPuzzle::startPuzzle(Player *player,
std::vector<std::string >* puzzles, bool* changeenv) {
p = puzzles;
change = &changeenv;
event(player);
}

void bouncerPuzzle::event(Player* player) {
int playerchoice;
std::cout << "You approach the Bouncer\n";
B->displayDialogue(3);
std::cout << "What would you like to do?\n";
    if (player->hasItem("GamblingTicket") == false) {
    failPuzzle(player);
    } else {
"1. Give him the ticket.\n 2. Do not give him the ticket.\n";
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
}

void bouncerPuzzle::failPuzzle(Player* player) {
    std::cout << "What ticket?\n";
    B->displayDialogue(0);
}

void bouncerPuzzle::solution(Player* player) {
    std::cout << "You give him the Gambling ticket\n";
    player->remItem("GamblingTicket");
    B->displayDialogue(2);
    solved("bouncerPuzzle");
    **change = true;
}

void bouncerPuzzle::giveReward(Player* player) {
}

bool bouncerPuzzle::solved(const std::string& puzzleId) {
    for (int i = 0; i < p->size(); ++i) {
       if (puzzleId == (*p)[i]) {
           p->erase(p->begin() + i);
      }
  }
    return true;
}
