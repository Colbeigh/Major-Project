#include "Game.hpp"

Game::Game() : environments{"Passenger Cart", "Dining Cart",
"Gambling Cart", "Luggage", "Baggage", "Between", "Prison",
"Medical", "Armory", "Engine"} {
  curenv = nullptr;
  changeEnvironment();
  changeenv = new bool(false);
  player = new Player();
}

Game::~Game() {
    delete curenv;
    delete currentpuzzle;
    delete puzzles;
    delete changeenv;
    delete player;
    curenv = nullptr;
    currentpuzzle = nullptr;
    puzzles = nullptr;
    changeenv = nullptr;
    player = nullptr;
}

void Game::Start() {
  std::string prologue = "This is the prologue";
  gameLoop();
}

void Game::gameLoop() {
  player->setAlive();

  while (isRunning()) {
    bool temp = true;
    std::cout << "You have entered into a new cart " << intenv.getName(curenv) << "\n";
    std::cout << intenv.getDesc(curenv) << "\n";
    puzzles = new std::vector<std::string>(intenv.getPuzzles(curenv));
    
    std::cout << "Would you like to go to the next cart?\n"
              << "Press capital Y to change and anything else to not ";
    
    char userin2;
    std::cin >> userin2;

    if (userin2 == 'Y') {
        changeEnvironment();
      temp = false;
    }

    while (temp) {
      promptPuzzles(*puzzles);
      std::string userinput = (*puzzles)[userInput(puzzles->size() + 1) - 1];
      std::cout << "You chose: " << userinput << std::endl;
      createPuzzle(userinput);
      intpuz.startPuzzle(player, puzzles, changeenv);
      std::cout << changeenv << "\n";
      ischangeEnv();
    }
  }
}

void Game::promptPuzzles(std::vector<std::string> puzzles) {
  for (int i = 0; i < puzzles.size(); ++i) {
      std::cout << i + 1 << ") " << puzzles[i] <<"\n";
    }
    std::cout << puzzles.size() + 1 << ") Help\n";
}

int Game::userInput(int length) {
  while (true) {
     int userinput;
     std::cin >> userinput;
     if (std::cin.fail()) {
       std::cin.clear();
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
       std::cout << "Invalid input. Please enter an integer between 1 " <<
       "and " << length << ".\n";
     } else if (userinput < 1 || userinput > length) {
         std::cout << "Invalid input. Please enter an integer between 1 and " <<
         length + 1 << ".\n";
      } else if (userinput == length) {
         std::cout << intenv.getHelp(curenv) << "\n";
      } else {
          return userinput;
    }
  }
}

bool Game::isRunning() {
  return player-> isAlive();
}

void Game::createPuzzle(std::string userinput) {
  if (currentpuzzle != nullptr) {
    delete currentpuzzle;
    currentpuzzle = nullptr;
  }

  currentpuzzle = FactPuz.createPuzzle(userinput);

  if (currentpuzzle == nullptr) {
    std::cerr << "Error: Puzzle creation failed for input: " <<
    userinput << std::endl;
    return;
  }

  intpuz.setPuzzle(currentpuzzle);
}

void Game::changeEnvironment() {
  if (curenv != nullptr) {
     delete curenv;
     curenv = nullptr;
  }

  if (!environments.empty()) {
      curenv = FactEnv.createEnvironment(*environments.begin());
      if (curenv == nullptr) {
        return;
      }
      environments.erase(environments.begin());
  } else {
      std::cerr << "Error: No more environments available to change to.\n";
  }
}

void Game::ischangeEnv() {
  if (changeenv != nullptr && *changeenv) {
    std::cout << "this is true to change env\n";
    std::cout << changeenv << "\n";
    changeEnvironment();
    *changeenv = false;
  } else {
    std::cerr << "Error: changeenv is null or false\n";
  }
}

Player* player;
std::vector<std::string> environments;
Puzzle* currentpuzzle = nullptr;
InteractEnvironment intenv;
FactoryEnvironment FactEnv;
InteractPuzzle intpuz;
FactoryPuzzle FactPuz;
std::vector<std::string>* puzzles;
bool* changeenv;
