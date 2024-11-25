#include "Player.hpp"

Player::Player() : name("Default") {}

Player::~Player() {}

bool Player::hasItem(std::string itemid) {
  return playerinv.hasItem(itemid);
}

void Player::addItem(std::string itemid) {
  playerinv.addItem(itemid);
}

void Player::remItem(std::string itemid) {
  playerinv.remItem(itemid);
}

bool Player::isAlive() {
  return alive;
}

void Player::setAlive(){
  alive = true;
}

void Player::setKill(){
  alive = false;
}
