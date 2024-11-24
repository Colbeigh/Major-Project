#include "Player.hpp"

#ifndef Player_H_INCLUDED
#define Player_H_INCLUDED

class Player {
 public:
  Player::Player() {}

  Player::~Player() {}

  bool Player::hasItem(int itemid){
    return playerinv.hasItem(itemid)
  }

  void Player::addItem(int itemid){
    playerinv.addItem(itemid);
  }

  void Player:remItem(int itemid){
    playerinv.remItem(itemid);
  }

  Inventory playerinv;
  std::string name = "Bill";
};

#endif
