#include <iostream>
#include <string>
#include <Inventory.hpp>

#ifndef Player_H_INCLUDED
#define Player_H_INCLUDED

class Game {
 public:
  Player();
  virtual ~Player();
  void getItem(int itemid);
  void addItem(int itemid);
  void remItem(int itemid);

  Inventory Player("Player");
  string name;
};

#endif
