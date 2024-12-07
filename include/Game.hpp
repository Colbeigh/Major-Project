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
  void createPuzzle(std::string userinput);
  void changeEnvironment();

  Player player;
  FactoryEnvironment FactEnv;
  Environment* currentenvironment;
  InteractEnvironment intenv;
  std::vector<std::string> environments;

  FactoryPuzzle FactPuz;
  Puzzle* currentpuzzle;
  InteractPuzzle intpuz;
  std::vector<std::string> puzzles;
  bool ischangeenv;
};

#endif
