#include "Game.hpp"

Game::Game() : environments{"Passenger Cart", "DiningCart",
"Gambling", "Luggage", "Baggage", "Between", "Prison",
"Medical", "Armory", "Engine"} {
  if (!environments.empty()) {
        curenv = FactEnv.createEnvironment(*environments.begin());
        if (curenv == nullptr) {
            std::cerr << "Error: Environment creation failed for: "
                      << *environments.begin() << std::endl;
            exit(EXIT_FAILURE);
        }
        intenv.setEnvironment(curenv);
        environments.erase(environments.begin());
    } else {
        std::cerr << "Error: No environments available." << std::endl;
        exit(EXIT_FAILURE);
    }
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
  std::cout << prologue <<"\nProgram does not" << 
  "currently have an exit and breaks at certain " <<
  "points please rerun and change environment to see all" << 
  "functions\n for this milestone\n";
  gameLoop();
}

void Game::gameLoop() {
  player->setAlive();

  while (isRunning()) {
    bool temp = true;
    std::cout << "You have entered into a new cart " << intenv.getName() << "\n";
    std::cout << intenv.getDesc() << "\n";
    puzzles = new std::vector<std::string>(intenv.getPuzzles());
    
    std::cout << "Would you like to go to the next cart?\n"
              << "Press capital Y to change and anything else to not ";
    
    char userin2;
    std::cin >> userin2;

    static int tempnum = 0; 

    if (userin2 == 'Y') {
      if (tempnum == 0) {
        curenv = new DiningCart;
      } else {
        curenv = new PassenegerCart();
      }
      temp = false;
      intenv.setEnvironment(curenv);
      tempnum = (tempnum + 1) % 2;
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
         std::cout << intenv.getHelp() << "\n";
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
  std::cout << "Change Environment function is running\n";
  if (curenv != nullptr) {
     curenv = nullptr;
     delete curenv;
  }
  if (!environments.empty()) {
      curenv = FactEnv.createEnvironment(*environments.begin());
      intenv.setEnvironment(curenv);
       environments.erase(environments.begin());
       std::cout << "test env name "<<
    intenv.getName() << "\n";
       std::cout << "zzzz ERNvironment Changed inside\n";
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
Environment* curenv = nullptr;
std::vector<std::string> environments;
Puzzle* currentpuzzle = nullptr;
InteractEnvironment intenv;
FactoryEnvironment FactEnv;
InteractPuzzle intpuz;
FactoryPuzzle FactPuz;
std::vector<std::string>* puzzles;
bool* changeenv;
