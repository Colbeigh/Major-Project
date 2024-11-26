#include "InteractPuzzle.hpp"


InteractPuzzle::InteractPuzzle() {
  puzzle = nullptr;
}

InteractPuzzle::~InteractPuzzle() {
  delete puzzle;
}

void InteractPuzzle::setPuzzle(Puzzle* puz) {
  if (puzzle != nullptr) {  // Avoid deleting a non-null puzzle again
    delete puzzle;
  }
  puzzle = puz;
  }

void InteractPuzzle::startPuzzle(Player* player,
std::vector<std::string>* puzzles, bool* changeenv) {
  if (puzzle != nullptr) {
    puzzle->startPuzzle(player, puzzles, changeenv);  // Start the puzzle
  } else {
    std::cerr << "Error: No puzzle set!" << std::endl;  // Handle case where no puzzle is set
  }
}
