/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */
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
  itemid = "Ticket";
}

PunchedTicket::PunchedTicket() {
  name = "Punched Train Ticket";
  desc = "The words help are punched into it";
  itemid = "PunchedTicket";
}

GamblingTicket::GamblingTicket() {
  name = "Gambling Ticket";
  desc = "VIP Access to the gambling car";
  itemid = "GamblingTicket";
}

Quarter::Quarter() {
  name = "Lucky Quarter";
  desc = "It's just an ordinary quarter, it kinda smells";
  itemid = "Quarter";
}
