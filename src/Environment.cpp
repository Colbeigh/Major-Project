#include <vector>
#include "Environment.hpp"
Environment::Environment() { // constructor
 name = "Unknowm Place";
 environmentDescription = "You are in an unknown place.";
}

Environment::~Environment() {}


std::string Environment::getDescription() {
    return environmentDescription;
}

std::vector<int> Environment::getPuzzles() {
    return puzzles;
}
