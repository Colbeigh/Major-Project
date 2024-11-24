#include <iostream>
#include <string>
#include <vector>
#include <Environment.hpp>
#include <InteractEnvironment.hpp>
#include <Interact_Puzzle.hpp>
#include <Player.hpp>

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class Game {
 public:
  Game();
  virtual ~Game();
  void Start();
  void gameLoop();
  void promptPuzzles(vector<int> puzzles);
  void userInput(int length);
  bool isRunning();
  void createPuzzle();
  void changeEnvironment();

  player Player;
  currentEnvironment* = nullptr;
  std::list<std::string> environments;
  interactEnvironment intenv;
  interactPuzzle intpuz;
  Vector<int> puzzles;
};

#endif
