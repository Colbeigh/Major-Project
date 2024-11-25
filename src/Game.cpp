#include "Game.hpp"

Game::Game() {
  curenv = FactEnv.createEnvironment(*environments.begin());
  curenv -> getName();
}

Game::~Game() {
  delete curenv;
  delete currentpuzzle;
}

void Game::Start() {
  std::string prologue = "This is the prologue";
  std::cout << prologue << "\n";
  gameLoop();
}

void Game::gameLoop() {

  std::cout << "You have entered into a new cart " << intenv.getName() << "\n";
  std::cout << intenv.getDesc() << "\n";
  puzzles = intenv.getPuzzles();
  while (ischangeEnv == false){
    promptPuzzles(puzzles);
    std::string userinput = puzzles[userInput(puzzles.size() + 1)];
    std::cout << userinput << std::endl;
    createPuzzle(userinput);
    intpuz.startPuzzle(player, puzzles, changeenv);
    ischangeEnv();
  }
}

void Game::promptPuzzles(std::vector<std::string> puzzles) {
  for (int i = 0; i < puzzles.size(); ++i) {
      std::cout << i + 1 << ") " << puzzles[i] <<"\n";
    }
    std::cout << puzzles.size() + 2 << ") Help\n";
}

int Game::userInput(int length) {
  while (true) {
     int userinput;
     std::cin >> userinput;
     if (std::cin.fail()) {
       std::cin.clear(); // Clear the error flag
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
       std::cout << "Invalid input. Please enter an integer between 1 " <<
       "and " << length << ".\n";
     } else if (userinput < 1 || userinput > length) {
         std::cout << "Invalid input. Please enter an integer between 1 and " <<
         length << ".\n";
      } else if (userinput == length - 1) {
         std::cout << intenv.getHelp() << "\n";
      } else {
          return userinput;
    }
  }
}

bool isRunning{
  if (player.alive == false) {
    return false;
  } else{
    return true;
  }
}

void Game::createPuzzle(std::string userinput) {
 if (currentpuzzle != nullptr) {
     delete currentpuzzle;
    currentpuzzle = nullptr;
  }
  currentpuzzle = FactPuz.createPuzzle(userinput);
  intpuz.setPuzzle(currentpuzzle);
}

void Game::changeEnvironment() {
  if (curenv != nullptr) {
     delete curenv;
    curenv = nullptr;
  }
  if (!environments.empty()) {
      curenv = FactEnv.createEnvironment(*environments.begin());
      intenv.setEnvironment(curenv);
       environments.erase(environments.begin());
  }
}

void Game::ischangeEnv() {
  if (changeenv == true) {
    changeEnvironment();
    changeenv = false;
  }
}

Player player;
Environment* curenv = nullptr;
std::vector<std::string> environments{"Passenger", "Dining", "Gambling",
"Luggage", "Baggage", "Between", "Prison", "Medical", "Armory", "Engine"
};

Puzzle* currentpuzzle = nullptr;
InteractEnvironment intenv;
FactoryEnvironment FactEnv;
InteractPuzzle intpuz;
FactoryPuzzle FactPuz;
std::vector<std::string> puzzles;
bool changeenv = false;
