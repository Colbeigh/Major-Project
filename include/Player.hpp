#include <iostream>
#include <string>
#include "Inventory.hpp"

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player {
 public:
  Player();
  virtual ~Player();
  bool hasItem(std::string itemid);
  void addItem(std::string itemid);
  void remItem(std::string itemid);
  bool isAlive();

  Inventory playerinv;
  std::string name;
  bool alive;
};

#endif
