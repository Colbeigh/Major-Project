#include <vector>
#include "Environment.hpp"

Environment::Environment() { // constructor
    name = "Unknowm Place";
    environmentDescription = "You are in an unknown place.";
    helpInfo = "Help is not implemented yet.";
    puzzles = {"Empty Puzzle"};
}

Environment::~Environment() {}

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
    puzzles = {"Talk to Ticket Master", "Pick a seat"};
}


DiningCart::DiningCart() {
    name = "Dining Cart";
    environmentDescription = "You are in the dining cart. "
    "The smell of food fills the air.";
    helpInfo = "You can ask the chef for help.";
    puzzles = {"Talk to Rich Lady", "Talk to bouncer"};
}

GamblingCart::GamblingCart() {
    name = "Gambling Cart";
    environmentDescription = "You are in the gambling cart.";
    helpInfo = "You can ask the dealer for help.";
    puzzles = {"Talk To HelpfullPassenger", "Talk to GambilingOutlaw"};
}

LuggageCart::LuggageCart() {
    name = "Luggage Cart";
    environmentDescription = "You are in the luggage cart.";
    helpInfo = "You can ask the porter for help.";
    puzzles = {"SearchRoom", "Check Breifcase"}; // Search Room Puzzle and Interact with breifcase.
}

ArmoryCart::ArmoryCart() {
    name = "Armory Cart";
    environmentDescription = "You are in the armory cart.";
    helpInfo = "You can ask the guard for help.";
    puzzles = {};
}

EngineCart::EngineCart() {
    name = "Engine Cart";
    environmentDescription = "Looking around you see the engine";
    helpInfo = "You can ask the engineer for help.";
    puzzles = {"Puzzle", "Puzzle"};
}

PassenegerCart::~PassenegerCart() {}
GamblingCart::~GamblingCart() {}
LuggageCart::~LuggageCart() {}
ArmoryCart::~ArmoryCart() {}
EngineCart::~EngineCart() {}
DiningCart::~DiningCart() {}
