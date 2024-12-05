#ifndef FACTORYENVIRONMENT_HPP
#define FACTORYENVIRONMENT_HPP

#include <string>
#include <map>
#include "Environment.hpp"

class FactoryEnvironment {
 public:
  FactoryEnvironment();
  Environment* createEnvironment(const std::string& name);
  std::map<std::string, Environment*> environmentmap;
};

#endif
