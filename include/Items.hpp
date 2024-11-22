#include <iostream>
#include <string>
#include <vector>
#include <Items.hpp>
#include <Player.hpp>

#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

class Item {
 public:
  Item();
  virtual ~Item();
  void Use();

 std::string name;
 int itemid;

};

#endif
