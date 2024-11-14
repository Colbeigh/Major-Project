#include <iostream>
#include <string>
#include <list>
#include <Environment.hpp>
#include <Interact_Puzzle.hpp>
#include <Player.hpp>

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class Game {
 public:
  Game();
  virtual ~Game();
  void Start();
  bool isrunning();
  void changeEnvironment();
  void setcurrentEnvironment();

  player Player;
  currentEnvironment* = nullptr;
  Environment list
};

#endif
