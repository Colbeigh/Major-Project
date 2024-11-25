#include <iostream>
#include <string>
#include <vector>
#include "Environment.hpp"
#include "InteractEnvironment.hpp"
//#include "Interact_Puzzle.hpp"
#include "FactoryEnvironment.hpp"
#include "Player.hpp"

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class Game {
 public:
  Game();
  virtual ~Game();
  void Start();
  void gameLoop();
  Game(const Game&) = delete;
  Game& operator=(const Game&) = delete
  void gameLoop();
  void promptPuzzles(std::vector<int> puzzles);
  int userInput(int length);
  //bool isRunning();
  void createPuzzle();
  void changeEnvironment();
  void ischangeEnv();

  Player player;
  Environment currentEnvironment;
  std::vector<std::string> environments;
  InteractEnvironment intenv;
  //interactPuzzle intpuz;
  std::vector<int> puzzles;
  bool changeenv;
};

#endif
