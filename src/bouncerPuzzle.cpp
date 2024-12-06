/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

bouncerPuzzle::bouncerPuzzle(): B(nullptr) {
B = new bouncer;
}

bouncerPuzzle::~bouncerPuzzle() {
delete B;
}

void bouncerPuzzle::startPuzzle(curenv, player, puzzles, changeenv) {
event(player);
}

void bouncerPuzzle::event(Player* player) {
std::cout << "You approach the Bouncer\n";
B->displayDialogue(2);
std::cout << "What would you like to do?\n";
    if (player->hasItem("GamblingTicket") == false) {
    failPuzzle(player);
    } else {
std::cout << "1. Give him the ticket.\n 2. Do not give him the ticket.\n";
    while (true) {
        int playerchoice;
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
    solved("Talk to bouncer");
    **change = true;
}

void bouncerPuzzle::giveReward(Player* player) {
}

void bouncerPuzzle::addPuzzle(const std::string& puzzleId) {
}

bool bouncerPuzzle::solved(const std::string& puzzleId) {
    for (int i = 0; i < p->size(); ++i) {
       if (puzzleId == (*p)[i]) {
           p->erase(p->begin() + i);
      }
  }
    return true;
}
