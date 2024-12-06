#include "InteractPuzzle.hpp"


InteractPuzzle::InteractPuzzle() {
  puzzle = nullptr;
}

InteractPuzzle::~InteractPuzzle() {
  delete puzzle;
}

 std::vector<std::string>InteractPuzzle::getPuzzle(Puzzle* puz) {
  if(puz = nullptr) {
    return "awd";
  }
  return puz->getPuzzle();
}
Player InteractPuzzle::getPlayer(Puzzle* puz) {
  if(puz = nullptr) {
    return "asd";
  }
  return puz->getPlayer();
}

bool InteractPuzzle::getChangeEnv(Puzzle* puz) {
  if(puz = nullptr) {
    return "das";
  return puz->getChangeEnv();
  }
}

void InteractPuzzle::startPuzzle(Puzzle* puz, Player player, 
  std::vector<std::string> puzzles, bool changeenv) {
  if (puz == nullptr) {
    std::cerr << "Error: No puzzle set!" << std::endl;
    return;
  }

  puz->startPuzzle(player, puzzles, changeenv);
 }
