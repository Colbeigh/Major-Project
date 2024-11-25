#include <iostream>
#include <string>
#include <vector>
#include "Environment.hpp"

#ifndef INTERACT_ENVIRONMENT_H_INCLUDED
#define INTERACT_ENVIRONMENT_H_INCLUDED

class InteractEnvironment {
 public:
  InteractEnvironment();
  virtual ~InteractEnvironment();
  void setEnvironment(Environment* env);
  std::string getName();
  std::string getDesc();
  std::string getHelp();
  std::vector<std::string> getPuzzles();

  Environment* environment;
};

#endif
