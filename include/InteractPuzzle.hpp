#include <iostream>
#include <string>
#include <vector>
#include "Puzzle.hpp"

#ifndef INTERACT_PUZZLE_H_INCLUDED
#define INTERACT_PUZZLE_H_INCLUDED

class InteractPuzzle {
 public:
  InteractPuzzle();
  virtual ~InteractPuzzle();
  void setPuzzle(Puzzle* puz);
  void startPuzzle(&player, &puzzles, &changeenv);

  Puzzle* puzzle;
};

#endif
