#include "InteractPuzzle.hpp"


InteractPuzzle::InteractPuzzle() {
  puzzle = nullptr;
}

InteractPuzzle::~InteractPuzzle() {
  delete puzzle;
}

void InteractPuzzle::setPuzzle(Puzzle* puz) {
  if (puzzle != nullptr) {
    puzzle = nullptr;
    delete puzzle;
  }
  puzzle = puz;
  }

void InteractPuzzle::startPuzzle(Player* player, std::vector<std::string>* puzzles, bool* changeenv) {
  if (puzzle == nullptr) {
    std::cerr << "Error: No puzzle set!" << std::endl;
    return;
  }
  if (player == nullptr || puzzles == nullptr || changeenv == nullptr) {
    std::cerr << "Error: Null argument passed to startPuzzle" << std::endl;
    return;
  }
  puzzle->startPuzzle(player, puzzles, changeenv);
}
