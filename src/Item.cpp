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

PieceOfPaper::PieceOfPaper() {
  name = "Outlaw's Piece of Paper";
  desc = "It's a piece of paper with a number on it"
  " and a smudged symbol";
  itemid = "PieceOfPaper";
}

Plans::Plans() {
  name = "O'Driscoll gangs plans";
  desc = "They plan to blow up the train to get back at me";
  itemid = "Plans";
}

Fakegun::Fakegun() {
  name = "Gun";
  desc = "A gun with a wooden handle and a silver barrel, with two bullets";
  itemid = "Fakegun";
}

Gun::Gun() {
  name = "Gun";
  desc = "A gun with a wooden handle and a silver barrel"
  " and a engraved symbol on the handle";
  itemid = "Gun";
}
