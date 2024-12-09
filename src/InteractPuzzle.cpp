#include "InteractPuzzle.hpp"


InteractPuzzle::InteractPuzzle() {
}

InteractPuzzle::~InteractPuzzle() {
}

std::vector<std::string>InteractPuzzle::getPuzzle(Puzzle* puzzle) {
  if (puzzle == nullptr) {
    return {};
  }
  return puzzle->getPuzzle();
}
Player InteractPuzzle::getPlayer(Puzzle* puzzle) {
  if (puzzle == nullptr) {
    return Player();
  }
  return puzzle->getPlayer();
}

bool InteractPuzzle::getChangeEnv(Puzzle* puzzle) {
  if (puzzle == nullptr) {
    return false;
  }
  return puzzle->getChangeEnv();
}

void InteractPuzzle::startPuzzle(Puzzle *puz, const Player& player,
  std::vector<std::string> puzzles, bool changeenv) {
  if (puz == nullptr) {
    std::cerr << "Error: No puzzle set!" << std::endl;
    return;
  }

  puz->startPuzzle(player, puzzles, changeenv);
  if(puz->getChangeEnv()) {
    changeenv = true;
  }
}
