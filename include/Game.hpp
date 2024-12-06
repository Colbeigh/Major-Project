#include <iostream>
#include <string>
#include <vector>
#include "Environment.hpp"
#include "InteractEnvironment.hpp"
#include "InteractPuzzle.hpp"
#include "FactoryEnvironment.hpp"
#include "FactoryPuzzle.hpp"
#include "Player.hpp"

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class Game {
 public:
  Game();
  virtual ~Game();
  Game(const Game&) = delete;
  Game& operator=(const Game&) = delete;
  void Start();
  void gameLoop();
  void promptPuzzles(std::vector<std::string> puzzles);
  int userInput(int length);
  bool isRunning();
  void createPuzzle(std::string userinput);
  void changeEnvironment();
  void ischangeEnv();

  Player player;
  Environment* curenv;
  std::vector<std::string> environments;
  std::vector<std::string> tempenvironments;

  Puzzle* currentpuzzle;
  InteractEnvironment intenv;
  FactoryEnvironment FactEnv;
  InteractPuzzle intpuz;
  FactoryPuzzle FactPuz;
  std::vector<std::string> puzzles;
  bool changeenv;
};

#endif
