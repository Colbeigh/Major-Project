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

Item* Ticket::clone() const {
  return new Ticket(*this);
}

PunchedTicket::PunchedTicket() {
  name = "Punched Train Ticket";
  desc = "The words help are punched into it";
  itemid = 2;
}

Item* PunchedTicket::clone() const {
  return new PunchedTicket(*this);
}

GamblingTicket::GamblingTicket() {
  name = "Gambling Ticket";
  desc = "VIP Access to the gambling car";
  itemid = 3;
}

Item* GamblingTicket::clone() const {
  return new GamblingTicket(*this);
}

Quarter::Quarter() {
  name = "Lucky Quarter";
  desc = "It's just an ordinary quarter, it kinda smells";
  itemid = 4;
}

Item* Quarter::clone() const {
  return new Quarter(*this);
}
