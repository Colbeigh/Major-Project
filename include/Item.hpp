#include <iostream>
#include <string>

#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

class Item {
 public:
  Item();
  virtual ~Item();
  std::string getName();
  std::string getDesc();

  std::string name;
  std::string desc;
  int itemid;
};

class Ticket : public Item {
 public:
  Ticket();
};

#endif

