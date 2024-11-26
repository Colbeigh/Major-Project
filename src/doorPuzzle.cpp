/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

doorPuzzle::doorPuzzle() : p(nullptr) {
}

doorPuzzle::~doorPuzzle() {
}

void doorPuzzle::startPuzzle(Player *player, std::vector<std::string >* puzzles,
bool* changeenv)  {
p = puzzles;
event(player);
}

void doorPuzzle::event(Player* player)  {
int playerchoice;
std::cout <<"Where would you like to sit?\n"<<
"1. Sit on left \n 2. Sit on right\n";
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

void doorPuzzle::failPuzzle(Player* player)  {
std::cout << "You decided to sit on the right\n";
}

void doorPuzzle::solution(Player* player)  {
std::cout << "You decided to sit on the left seat\n";
}

void doorPuzzle::giveReward(Player* player)  {
}

void doorPuzzle::addPuzzle(const std::string& puzzleId) {
p->push_back(puzzleId);
}

 bool doorPuzzle::solved(const std::string& puzzleId) {
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
