#include "InteractEnvironment.hpp"


InteractEnvironment::InteractEnvironment() {
  environment = nullptr;
}

InteractEnvironment::~InteractEnvironment() {
  delete environment;
}

std::string InteractEnvironment::getName(Environment* env) {
  if (env == nullptr) {
    return "null";
  }
  return env->getName();
}

std::string InteractEnvironment::getDesc(Environment* env) {
  if (env == nullptr) {
     return "";
  }
  return env ->getDescription();
  }

std::string InteractEnvironment::getHelp(Environment* env) {
    if (env == nullptr) {
      return "";
}
return env -> help();
}

std::vector<std::string> InteractEnvironment::getPuzzles(Environment* env) {
  if (env == nullptr) {
     return std::vector<std::string>();
  }
  return env -> getPuzzles();
}
