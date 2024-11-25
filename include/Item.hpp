#include <iostream>
#include <string>

#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

class Item {
 public:
  Item(int id);
  virtual ~Item();
  std::string getName();

  std::string name;
  int itemid;
};

class Ticket : public Item {
 public:
  Ticket();  // Constructor for Ticket class
};

#endif

