#include <Game.hpp>



class Game{
 public:
  Game() {
    currentEnvironment = Environment(environments.front()) 
  }

  virtual ~Game() {
    delete currentEnvironment;
  }

  void Start() {
  }

  bool isrunning() {
  }

  void changeEnvironment() {
    if (currentEnvironment != nullptr) {
      delete currentEnvironment;
      currentEnvironment = nullptr;
    }
    environments.pop_front();
    currentEnvironment = Environment(environments.front())
  }

  player Player;
  currentEnvironment* = nullptr;
  std::list<std::string> environments{"Passenger", "Dining", "Gambling",
  "Luggage", "Baggage", "Between", "Prison", "Medical", "Armory", "Engine"}
};
