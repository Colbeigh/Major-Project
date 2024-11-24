#include <iostream>
#include <vector>
#include <string>
#include "Item.hpp"
#include "Player.hpp"

#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

class Inventory {
 public:
  Inventory();
  virtual ~Inventory();
  int getItem(int itemid);
  void additem(int itemid);
  void remItem(int itemid);
  std::string getName(int itemid);
  void createItem(int itemid);

  std::vector<int> items;
  Item* item;
};

#endif
