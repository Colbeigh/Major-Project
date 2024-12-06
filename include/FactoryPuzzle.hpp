#ifndef FACTORYPUZZLE_HPP
#define FACTORYPUZZLE_HPP

#include <string>
#include <map>
#include "Puzzle.hpp"

class FactoryPuzzle {
 public:
  FactoryPuzzle();
  Puzzle* createPuzzle(const std::string& name);
  std::map<std::string, Puzzle*> puzzlemap;
};

#endif
