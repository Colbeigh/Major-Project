/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */

#include "Puzzle.hpp"

void Puzzle::addPuzzle(std::string puzzleid){
    puzz.push_back(puzzleid);
}

void Puzzle::remPuzzle(std::string puzzleid) {
  for (int i = 0; i < puzz.size(); ++i) {
       if (puzzleid == puzz[i]) {
           puzz.erase(puzz.begin() + i);
          return;
      }
  }
}

void Puzzle::startPuzzle(Player player, 
  std::vector<std::string> puzzles, bool changeenv) {
p = player;
puzz = puzzles;
env = changeenv;
event();
}

int Puzzle::pInput() {
int playerchoice;
  while (true) {
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