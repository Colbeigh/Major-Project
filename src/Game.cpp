/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "Game.hpp"

Game::Game() : environments{"Passenger Cart", "Dining Cart",
"Gambling Cart", "Luggage", "Baggage", "Between", "Prison",
"Medical", "Armory", "Engine"} {
  currentenvironment = nullptr;
  currentpuzzle = nullptr;
  changeEnvironment();
}

Game::~Game() {
    delete currentenvironment;
    delete currentpuzzle;
}

void Game::Start() {
  std::string prologue = "This is the prologue";
  player.setAlive();
  player.addItem("Ticket");
  gameLoop();
}

void Game::gameLoop() {
  while (player.isAlive()) {
    ischangeenv = false;
    std::cout << "You have entered into a new cart " << 
    intenv.getName(currentenvironment) << "\n";
    std::cout << intenv.getDesc(currentenvironment) << "\n";
    puzzles = intenv.getPuzzles(currentenvironment);

    while (!ischangeenv) {
      promptPuzzles(puzzles);
      std::string userinput = (puzzles)[userInput(puzzles.size() + 1) - 1];
      std::cout << "You chose: " << userinput << std::endl;
      createPuzzle(userinput);
      intpuz.startPuzzle(currentpuzzle, player, puzzles, ischangeenv);
      player = intpuz.getPlayer(currentpuzzle);
      puzzles = intpuz.getPuzzle(currentpuzzle);
      ischangeenv = intpuz.getChangeEnv(currentpuzzle);
    }
  }
}

void Game::promptPuzzles(std::vector<std::string> puzzles) {
  for (int i = 0; i < puzzles.size(); ++i) {
      std::cout << i + 1 << ") " << puzzles[i] <<"\n";
    }
    std::cout << puzzles.size() + 1 << ") Help\n";
    std::cout << puzzles.size() + 2 << ") Inventory\n";
    std::cout << puzzles.size() + 3 << ") Quit\n";
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
     } else if (userinput < 1 || userinput > length + 2) {
         std::cout << "Invalid input. Please enter an integer between 1 and " <<
         length + 1 << ".\n";
      } else if (userinput == length) {
         std::cout << intenv.getHelp(currentenvironment) << "\n";
      }  else if (userinput == length + 1) {
         player.listItem();
      }  else if (userinput == length + 2) {
         std::cout << "Qutting...\n";
         exit(0);
      } else {
          return userinput;
      }
  }
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
}

void Game::changeEnvironment() {
  if (currentenvironment != nullptr) {
     delete currentenvironment;
     currentenvironment = nullptr;
  }

  if (!environments.empty()) {
      currentenvironment = FactEnv.createEnvironment(*environments.begin());
      if (currentenvironment == nullptr) {
        return;
      }
      environments.erase(environments.begin());
  } else {
      std::cerr << "Error: No more environments available to change to.\n";
  }
}
