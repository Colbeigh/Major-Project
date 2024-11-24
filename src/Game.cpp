#include "Game.hpp"


class Game{
 public:
  Game::Game() {
    currentenvironment = new Environment(environments.front());
  }

  virtual Game::~Game() {
    delete currentenvironment;
    delete currentpuzzle;
  }

  void Game::Start() {
    cout << prologue << "\n";
    gameLoop();
  }

    Game::Game(const Game&) = delete;
    
    Game& operator=(const Game&) = delete;

  void Game::gameLoop() {  
    cout << "You have entered into a new cart " << intenv.getName() << "\n";
    cout << intenv.getDesc() << "\n";
    puzzles = intenv.getPuzzles();
    promptPuzzles(puzzles);
    int userinput = userInput(puzzles.size() + 2);
    createPuzzle(userinput);
    intpuz.startPuzzle(&player, &puzzles, &changeenv);
    ischangeEnv();
  }

  void Game::promptPuzzles(std::vector<int> puzzles) {
    for(int i = 0; i < puzzles.size(); ++i){
        cout << i + 1 << ") " << puzzles[i] <<"\n";
      }
      cout << puzzles.size() + 2 << ") Help\n";
  }

  int Game::userInput(int length) {
    while(true){
      int userinput;
      std::cin >> userinput;
      if (std::cin.fail()) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer between 1 " <<
            "and " << length << ".\n";
        }
      else if (userinput < 1 || userinput > length) {
        std::cout << "Invalid input. Please enter an integer between 1 and " <<
       length << ".\n";
      }
      else if (userinput == length){
      std::cout << intenv.help() << "\n";
      }
      else{
        return userinput;
      }
    }
  }

  void Game::createPuzzle(int userinput) {
    if (currentpuzzle != nullptr) {
      delete currentpuzzle;
      currentpuzzle = nullptr;
    }
    currentpuzzle = new Puzzle(puzzles[userinput]);
    intpuz.setPuzzle(currentpuzzle);
  }

  void Game::changeEnvironment() {
    if (currentenvironment != nullptr) {
      delete currentenvironment;
      currentenvironment = nullptr;
    }
    if (!environments.empty()) {
        currentenvironment = new Environment(environments.front());
        intenv.setEnvironment(currentenvironment);
        environments.erase(environments.begin());
    }
  }

  void Game::ischangeEnv() {
    if(changeenv == true){
      changeEnvironment();
      changeenv = false;
    }
  }

  Player player;
  Environment* currentenvironment = nullptr;
  std::vector<std::string> environments{"Passenger", "Dining", "Gambling",
  "Luggage", "Baggage", "Between", "Prison", "Medical", "Armory", "Engine"
  };
  
  Puzzle* currentpuzzle = nullptr;
  interactEnvironment intenv;
  interactPuzzle intpuz;
  std::vector<int> puzzles;
  bool changeenv = false;
  std::string prologue = "This is the prologue";
};
