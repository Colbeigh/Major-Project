#include "InteractPuzzle.hpp"


InteractPuzzle::InteractPuzzle() {
  Puzzle* Puzzle = nullptr;
}

InteractPuzzle::~InteractPuzzle() {
  delete puzzle;
}

void InteractPuzzle::setPuzzle(Puzzle* puz) {
  delete puzzle;
puzzle = puz;
  }

void InteractPuzzle::startPuzzle(Player &player,
std::vector<std::string> &puzzles, bool &changeenv) {
  if (puzzle != nullptr) {
    delete puzzle;
  }
  puzzle ->startPuzzle();
}
