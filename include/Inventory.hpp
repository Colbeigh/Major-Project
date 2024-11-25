#include <iostream>
#include <vector>
#include <string>
#include "FactoryItem.hpp"
#include "Item.hpp"

#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

class Inventory {
 public:
  Inventory();
  virtual ~Inventory();
  bool hasItem(std::string itemid);
  void addItem(std::string itemid);
  void remItem(std::string itemid);
  std::string getName(std::string itemid);
  std::string getDesc(std::string itemid);
  void createItem(std::string itemid);

  std::vector<std::string> items;
  Item* item;
  FactoryItem FacItem;
};

#endif
