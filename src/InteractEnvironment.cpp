#include "InteractEnvironment.hpp"


InteractEnvironment::InteractEnvironment() {
  Environment* environment = nullptr;
}

InteractEnvironment::~InteractEnvironment() {
  delete environment;
}

void InteractEnvironment::setEnvironment(Environment* env) {
  delete environment;
environment = env;
  }

std::string InteractEnvironment::getName() {
  if (environment != nullptr) {
    delete environment;
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
