#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"
#include "Puzzle.hpp"

#ifndef INTERACT_PUZZLE_H_INCLUDED
#define INTERACT_PUZZLE_H_INCLUDED

class InteractPuzzle {
 public:
  InteractPuzzle();
  virtual ~InteractPuzzle();
  std::vector<std::string> getPuzzle(Puzzle* puzzle);
  Player getPlayer(Puzzle* puzzle);
  bool getChangeEnv(Puzzle* puzzle);
  void startPuzzle(Puzzle* puz, Player player, 
  std::vector<std::string> puzzles, bool changeenv);
};

#endif
