#ifndef FACTORYENVIRONMENT_HPP
#define FACTORYENVIRONMENT_HPP

#include <string>
#include "Environment.hpp"

class FactoryEnvironment {
 static Environment* createEnvironment(const std::string& name);

};

#endif