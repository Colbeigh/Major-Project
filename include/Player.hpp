#include <iostream>
#include <string>
#include "Inventory.hpp"

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player {
 public:
  Player();
  virtual ~Player();
  bool hasItem(int itemid);
  void addItem(int itemid);
  void remItem(int itemid);

  Inventory playerinv;
  std::string name;
};

#endif
