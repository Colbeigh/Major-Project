#include "InteractEnvironment.hpp"

class InteractEnvironment {
 public:
  InteractEnvironment::InteractEnvironment() {
    Environment* environment = nullptr;
  }
  
  virtual InteractEnvironment::~InteractEnvironment() {
    delete environment;
  }

  void InteractEnvironment::setEnvironment(Environment env) {
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
    if (environment == nullptr){
      return "";
    }
    return environment ->getDesc();
  }

  std::string InteractEnvironment::getHelp() {
        if (environment == nullptr){
      return "";
    }
    return environment ->getHelp();
  }
  std::vector<int> InteractEnvironment::getPuzzles() {
    if (environment == nullptr){
      return "";
    }
    return environment -> getPuzzles();
  }
};

