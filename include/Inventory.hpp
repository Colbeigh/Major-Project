#include <iostream>
#include <vector>
#include <Items.hpp>
#include <Player.hpp>

#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

class Inventory {
 public:
  Inventory();
  virtual ~Inventory();
  void listItems();

  vector<int> items;

};

#endif
