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
    std::vector<std::string> getPuzzles();
    std::string getName();
    std::string help();
    std::string name;
    std::string environmentDescription;
    std::string helpInfo;
    std::vector<std::string> puzzles;
};

class PassengerCart : public Environment {
 public:
    PassengerCart();
    virtual ~PassengerCart();
};

class DiningCart : public Environment {
 public:
    DiningCart();
    virtual ~DiningCart();
};

class GamblingCart : public Environment {
 public:
    GamblingCart();
    virtual ~GamblingCart();
};

class LuggageCart : public Environment {
 public:
    LuggageCart();
    virtual ~LuggageCart();
};

class ArmoryCart : public Environment {
 public:
    ArmoryCart();
    virtual ~ArmoryCart();
};

class EngineCart : public Environment {
 public:
    EngineCart();
    virtual ~EngineCart();
};

#endif //ENVIRONMENT_H_INCLUDED
