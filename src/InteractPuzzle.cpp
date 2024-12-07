#include "InteractPuzzle.hpp"


InteractPuzzle::InteractPuzzle() : puzzle(nullptr) {
}

InteractPuzzle::~InteractPuzzle() {
  delete puzzle;
}

 std::vector<std::string>InteractPuzzle::getPuzzle() {
  if(puzzle == nullptr) {
    return {};
  }
  return puzzle->getPuzzle();
}
Player InteractPuzzle::getPlayer() {
  if(puzzle == nullptr) {
    return Player();
  }
  return puzzle->getPlayer();
}

bool InteractPuzzle::getChangeEnv() {
  if(puzzle == nullptr) {
    return false;
  }
  return puzzle->getChangeEnv();
}

void InteractPuzzle::startPuzzle(Puzzle *puz, Player player, 
  std::vector<std::string> puzzles, bool changeenv) {
  if (puz == nullptr) {
    std::cerr << "Error: No puzzle set!" << std::endl;
    return;
  }

  puz->startPuzzle(player, puzzles, changeenv);
 }