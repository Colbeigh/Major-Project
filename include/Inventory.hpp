#include <iostream>
#include <vector>
#include <string>
#include "Item.hpp"

#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

class Inventory {
 public:
  Inventory();
  virtual ~Inventory();
  bool hasItem(int itemid);
  void addItem(int itemid);
  void remItem(int itemid);
  std::string getName(int itemid);
  void createItem(int itemid);

  std::vector<int> items;
  Item* item;
};

#endif
