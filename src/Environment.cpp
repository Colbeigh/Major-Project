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




std::vector<std::string> createNPC = {"Ticket Master"
, "Rich Lady", "Bouncer"};  // vector of NPC names
std::vector<NPC> npcs; // vector of NPC objects
    for (int i = 0; i < createNPC.size(); i++)
         addNPC(createNPC[i]);
 void Environment::addNPC(const std::string& npcName) {
     npcs.emplace_back(npcName);
 }
