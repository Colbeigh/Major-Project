#ifndef FACTORYENVIRONMENT_HPP
#define FACTORYENVIRONMENT_HPP

#include <string>
#include "Environment.hpp"

class FactoryEnvironment {
 public:
  static Environment* createEnvironment(const std::string& name);
};

#endif
