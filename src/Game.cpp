#include <Game.hpp>


class Game{
 public:
  Game() {
    currentEnvironment = Environment(environments.front()) 
  }

  virtual ~Game() {
    delete currentEnvironment;
  }

  void GameLoop{

    cout << "You have entered into a new cart " << interact.getname()\n;
    cout << interact.getDesc()\n;
    puzzles = interact.getPuzzles;
      for(int i = 0; i < vec.size(); ++i){
        cout << i + 1 << ") " << puzzles[i] <<.\n
      }
      cin << int userinput;
      intpuz.createPuzzle(puzzles[i-1]);
  }

  bool isrunning() {
  }

  void changeEnvironment() {
    if (currentEnvironment != nullptr) {
      delete currentEnvironment;
      currentEnvironment = nullptr;
    }
    if (!environments.empty()) {
        currentEnvironment = new Environment(environments.front());
        intenv.setEnvironment(currentEnvironment);
        environments.pop_front();
  }


  player Player;
  currentEnvironment* = nullptr;
  std::list<std::string> environments{"Passenger", "Dining", "Gambling",
  "Luggage", "Baggage", "Between", "Prison", "Medical", "Armory", "Engine"}
  
  interactEnvironment intenv;
  interactPuzzle intpuz;
  Vector<int> puzzles;
};
