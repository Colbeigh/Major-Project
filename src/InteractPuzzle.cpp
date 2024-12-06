#include "InteractPuzzle.hpp"


InteractPuzzle::InteractPuzzle() {
  puzzle = nullptr;
}

InteractPuzzle::~InteractPuzzle() {
  delete puzzle;
}

void InteractPuzzle::getPuzzle(Puzzle* puz) {
  if(puz = nullptr) {
    return "";
  }
  return puz->getPuzzle();
}
void InteractPuzzle::getPlayer(Puzzle* puz) {
  if(puz = nullptr) {
    return "";
  }
  return puz->getPlayer();
}

void InteractPuzzle::getChangeEnv(Puzzle* puz) {
  if(puz = nullptr) {
    return ""
  }
  return puz->getChangeEnv();
}

void InteractPuzzle::startPuzzle(puz, player, puzzles, changeenv) {
  if (puzzle == nullptr) {
    std::cerr << "Error: No puzzle set!" << std::endl;
    return;
  }
  if (player == nullptr || puzzles == nullptr || changeenv == nullptr 
  || curenv == nullptr) {
    std::cerr << "Error: Null argument passed to startPuzzle" << std::endl;
    return;
  
  puz->startPuzzle(curenv, player, puzzles, changeenv);
  }
}
