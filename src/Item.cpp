#include "Item.hpp"

Item::Item(int id) : itemid(id) {
  name = "Unknown";
}

Item::~Item() {}

std::string Item::getName() {
  return name;
}

Ticket::Ticket() : Item(1) {
  name = "Train Ticket";
}
