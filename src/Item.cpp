#include "Item.hpp"

Item::Item() {
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

Ticket::Ticket() {
  name = "Train Ticket";
  desc = "Unpunched ticket";
  itemid = 1;
}

PunchedTicket::PunchedTicket() {
  name = "Punched Train Ticket";
  desc = "The words help are punched into it";
  itemid = 2;
}

Quarter::Quarter() {
  name = "Lucky Quarter";
  desc = "It's just an ordinary quarter, it kinda smells";
  itemid = 3;
}
