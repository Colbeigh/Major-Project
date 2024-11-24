#ifndef ENVIRONMENT_H_INCLUDED
#define ENVIRONMENT_H_INCLUDED
#include <string>
#include <memory>
#include <iostream>
#include <vector>
#include "NPC.hpp"

class Puzzle;
class Item;


class Environment {
 public:
    Environment();
    virtual ~Environment();
    std::string getDescription();
    int getNPCPuzzle(int PuzzleID);
    void addLootableItem(std::string item);
    std::vector<Puzzle> getPuzzles();
    std::string getName();
    virtual std::string getEnviroment();
    virtual void help();
    std::string name;
    std::string environmentDescription;
    std::string helpInfo;
    std::vector<Puzzle> puzzles;
};

#endif //ENVIRONMENT_H_INCLUDED

    //std::list<NPC> npcs;
    //void addNPC(const std::string& npc);
