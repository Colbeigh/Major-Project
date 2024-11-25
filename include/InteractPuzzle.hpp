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
  void setPuzzle(Puzzle* puz);
  void startPuzzle(Player &player,
   std::vector<std::string> &puzzles,  bool &changeenv);

  Puzzle* puzzle;
};

#endif
