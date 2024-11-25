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
    std::vector<std::string> getPuzzles(std::string puzzles);
    std::string getName();
    std::string help();
    std::string name;
    std::string environmentDescription;
    std::string helpInfo;
    std::vector<std::string> puzzles;
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
