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
    virtual std::vector<std::string> getPuzzles(std::string puzzles);
    std::string getName();
    virtual std::string getEnviroment();
    virtual void help();
    std::string name;
    std::string environmentDescription;
    std::string helpInfo;
    std::vector<std::string> puzzles;
};

class PassenegerCart : public Environment {
 public:
    PassenegerCart();
    void help() override;
    std::vector<std::string> getPuzzles(std::string puzzles) override;
    virtual ~PassenegerCart();
};


class DiningCart : public Environment {
 public:
    DiningCart();
    void help() override;
    virtual ~DiningCart();
    std::vector<std::string> getPuzzles(std::string puzzles) override;
};

#endif //ENVIRONMENT_H_INCLUDED
