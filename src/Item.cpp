#include "Item.hpp"

Item::Item() : name("Unknown"), itemid(-1) {}

Item::~Item() {}

std::string Item::getName() {
  return name;
}

Ticket::Ticket() {
  name = "Train Ticket";
  itemid = 1;
}
