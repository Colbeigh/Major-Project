/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

doorPuzzle::doorPuzzle() : change(nullptr) {

}

doorPuzzle::~doorPuzzle() {

}

void doorPuzzle::startPuzzle(Player *player, std::vector<std::string >* puzzles,
bool* changeenv)  {
change = &changeenv;
event(player);
}

void doorPuzzle::event(Player* player)  {
int playerchoice;
std::cout <<"What would you like to do?\n"<<
"1. Open and Enter\n 2. Nothing\n";
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

}

void doorPuzzle::solution(Player* player)  {

}

void doorPuzzle::giveReward(Player* player)  {

}

bool doorPuzzle::solved(const std::string& puzzleId) {

}
