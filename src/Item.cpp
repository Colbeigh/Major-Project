#include "Item.hpp"

Item::Item(){
  name = "Unknown";
  desc = "NONE";
  itemid = -1;;
}

Item::~Item() {}

std::string Item::getName() {
  return name;
}

std::string Item::getDesc() {
  return desc;
}

Ticket::Ticket(){
  name = "Train Ticket";
  desc = "unpunched ticket";
  itemid = 1;
}
