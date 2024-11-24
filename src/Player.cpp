#include "Player.hpp"

class Player {
 public:
  Player::Player() {
    name = "Bill";
  }

  Player::~Player() {}

  bool Player::hasItem(int itemid) {
    return playerinv.hasItem(itemid);
  }

  void Player::addItem(int itemid) {
    playerinv.addItem(itemid);
  }

  void Player:remItem(int itemid) {
    playerinv.remItem(itemid);
  }

  Inventory playerinv;
  std::string name;
};

