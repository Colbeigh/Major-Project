#ifndef ENVIRONMENT_H_INCLUDED
#define ENVIRONMENT_H_INCLUDED
#include <string>
#include <memory>
#include <iostream>
#include <vector>
#include "NPC.hpp"

class Environment {
 public:
    Environment();
    virtual ~Environment();
    std::string getDescription();
    int getNPCPuzzle(int PuzzleID);
    void addLootableItem(std::string item);
    std::vector<int> getPuzzles();
    virtual std::string getName();
    virtual std::string getEnviroment();
    virtual void help();
    std::string name;
    std::string environmentDescription;
    std::string helpInfo;
    std::vector<int> puzzles;
};

class PassenegerCart : public Environment {
 public:
    PassenegerCart();
    virtual ~PassenegerCart();
};


class DiningCart : public Environment {
 public:
    DiningCart();
    virtual ~DiningCart();
};

#endif //ENVIRONMENT_H_INCLUDED
