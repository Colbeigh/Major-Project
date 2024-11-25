#include "InteractPuzzle.hpp"


InteractPuzzle::InteractPuzzle() {
  Puzzle* Puzzle = nullptr;
}

InteractPuzzle::~InteractPuzzle() {
  delete Puzzle;
}

void InteractPuzzle::setPuzzle(Puzzle* puz) {
  delete Puzzle;
puzzle = puz;
  }

void InteractPuzzle::startPuzzle(&player, &puzzles, &changeenv) {
  if (Puzzle != nullptr) {
    delete Puzzle;
  }
   puzzle ->Start();
}
