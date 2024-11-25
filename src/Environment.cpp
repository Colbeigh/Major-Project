#include <vector>
#include "Environment.hpp"

Environment::Environment() { // constructor
 name = "Unknowm Place";
 environmentDescription = "You are in an unknown place.";
}

Environment::~Environment() {} // destructor

std::string Environment::getDescription() {
    return environmentDescription;
}

std::vector<std::string> Environment::getPuzzles(std::string puzzles) {
    //return puzzles;
}

void Environment::help() {
    std::cout << "Help is not implemented yet.\n";
}


PassenegerCart::PassenegerCart() {
    name = "Passenger Cart";
    environmentDescription = "Looking around the environment, "
    "you see passeneger, and a ticket master walking around";
    puzzles = {"puzzle2", "puzzle3"};
}

PassenegerCart::~PassenegerCart() {}

void PassenegerCart::help() {
    std::cout << "HELP! HELP! HELP! HELP!.\n";
}

std::vector<std::string> PassenegerCart::getPuzzles(std::string puzzles) {
    //return puzzles;
}


DiningCart::DiningCart() {
    name = "Dining Cart";
    environmentDescription = "You are in the dining cart. The smell of food fills the air.";
    puzzles = {"puzzle4", "puzzle5"};
    
};

DiningCart::~DiningCart() {};

void DiningCart::help() {
    std::cout << "HELP! HELP! HELP! HELP!.\n";
}

std::vector<std::string> DiningCart::getPuzzles(std::string puzzles) {
   // return puzzles;
}



