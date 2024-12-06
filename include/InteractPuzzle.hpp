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
  void getPuzzle(Puzzle* puz);
  void getPlayer(Puzzle* puz);
  void getChangeEnv(Puzzle* puz);
  void startPuzzle(curenv, player, puzzles, changeenv);
  Puzzle* puzzle;
};

#endif
