/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

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
  std::string getName(Environment* env);
  std::string getDesc(Environment* env);
  std::string getHelp(Environment* env);
  std::vector<std::string> getPuzzles(Environment* env);

  Environment* environment;
};
#endif
