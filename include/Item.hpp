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
  virtual Item* clone() const = 0;
  std::string name;
  std::string desc;
  int itemid;
};

class Ticket : public Item {
 public:
  Ticket();
  Item* clone() const override;
};

class PunchedTicket : public Item {
 public:
  PunchedTicket();
  Item* clone() const override;
};


class GamblingTicket : public Item {
 public:
  GamblingTicket();
  Item* clone() const override;
};

class Quarter : public Item {
 public:
  Quarter();
  Item* clone() const override;
};
#endif
