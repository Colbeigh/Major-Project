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


PassengerCart::PassengerCart() {
    name = "Passenger Cart";
    environmentDescription = "Looking around, you see lots"
    " of passengers, and a ticket master walking around\n";
    helpInfo = "Give him your Ticket.\n";
    puzzles = {"Pick a seat"};
}


DiningCart::DiningCart() {
    name = "Dining Cart";
    environmentDescription = "The smell of food fills the air.\n"
    "You see a Rich looking lady eating food and a bouncer"
    " across the cart guarding a door\n";
    helpInfo = "Talk to the bouncer.";
    puzzles = {"Talk to Rich Lady", "Talk to bouncer"};
}

GamblingCart::GamblingCart() {
    name = "Gambling Cart";
    environmentDescription = "It riques of ciggarettes and beer "
    "You notice a gruff looking dealer and a friendly looking passenger"
    " smiling at you\n";
    helpInfo = "You should talk to the friendly looking passenger.\n";
    puzzles = {"Talk to HelpfulPassenger", "Talk to GambilingOutlaw"};
}

LuggageCart::LuggageCart() {
    name = "Luggage Cart";
    environmentDescription = "Its full of luggage\n";
    helpInfo = "Look for the luggage on the piece of paper";
    puzzles = {"Catch a breath"};
}

ArmoryCart::ArmoryCart() {
    name = "Armory Cart";
    environmentDescription = "Has a heavy open door with metal "
    "barricades, has a metal rack full of stuff on the top shelf\n";
    helpInfo = "Think twice before choosing\n";
    puzzles = {"Look around the armory"};
}

EngineCart::EngineCart() {
    name = "Engine Cart";
    environmentDescription = "You see a silhouette and plumes "
    "of smoke\n";
    helpInfo = "Remember you have a gun\n";
    puzzles = {"Approach the Gang Leader"};
}

PassengerCart::~PassengerCart() {}
GamblingCart::~GamblingCart() {}
LuggageCart::~LuggageCart() {}
ArmoryCart::~ArmoryCart() {}
EngineCart::~EngineCart() {}
DiningCart::~DiningCart() {}
