#include "InteractEnvironment.hpp"


InteractEnvironment::InteractEnvironment() {
  environment = nullptr;
}

InteractEnvironment::~InteractEnvironment() {
  delete environment;
}

void InteractEnvironment::setEnvironment(Environment* env) {
  if (environment != nullptr) {
    delete environment;  // Avoid double deletion if environment already holds a pointer
  }
  environment = env;
  }

std::string InteractEnvironment::getName() {
  if (environment != nullptr) {
    return "";
  }
  return environment ->getName();
}

std::string InteractEnvironment::getDesc() {
  if (environment == nullptr) {
     return "";
  }
  return environment ->getDescription();
  }

std::string InteractEnvironment::getHelp() {
    if (environment == nullptr) {
      return "";
}
return environment -> help();
}

std::vector<std::string> InteractEnvironment::getPuzzles() {
  if (environment == nullptr) {
     return std::vector<std::string>();
  }
  return environment -> getPuzzles();
}
