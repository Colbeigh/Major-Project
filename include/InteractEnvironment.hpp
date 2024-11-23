#include <iostream>
#include <string>
#include <list>
#include <Environment.hpp>
#include <Player.hpp>

#ifndef INTERACT_ENVIRONMENT_H_INCLUDED
#define INTERACT_ENVIRONMENT_H_INCLUDED

class InteractEnvironment {
 public:
  InteractEnvironment();
  virtual ~InteractEnvironment();
  void setEnvironment();
  void getName();
  void getDesc();
  void getPuzzles();
  void remPuzzle(int puzzleid);

  Environment* environment;
};

#endif
