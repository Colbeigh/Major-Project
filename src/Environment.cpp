#include <vector>
#include "Environment.hpp"

Environment::Environment() { // constructor
    name = "Unknowm Place";
    environmentDescription = "You are in an unknown place.";
    helpInfo = "Help is not implemented yet.";
    puzzles = {"Empty Puzzle"};
}

Environment::~Environment() {} // destructor

std::string Environment::getDescription() {
    return environmentDescription;
}

std::vector<std::string> Environment::getPuzzles() {
    return { puzzles };
}

std::string Environment::help() {
    return helpInfo;
}

std::string Environment::getName() {
    return name;
}


PassenegerCart::PassenegerCart() {
    name = "Passenger Cart";
    environmentDescription = "Looking around the environment, "
    "you see passeneger, and a ticket master walking around";
    helpInfo = "You can ask the ticket master for help.";
    puzzles = {"puzzle2", "puzzle3"};
}

PassenegerCart::~PassenegerCart() {}

DiningCart::DiningCart() {
    name = "Dining Cart";
    environmentDescription = "You are in the dining cart."
    "The smell of food fills the air.";
    helpInfo = "You can ask the chef for help.";
    puzzles = {"puzzle4", "puzzle5"};
}

DiningCart::~DiningCart() {}
