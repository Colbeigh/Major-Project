#ifndef FACTORYPUZZLE_HPP
#define FACTORYPUZZLE_HPP

#include <string>
#include "Puzzle.hpp"

class FactoryPuzzle {
 public:
 static Puzzle* createPuzzle(const std::string& name);
};

#endif