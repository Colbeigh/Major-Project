#include "Player.hpp"

Player::Player() : name("Default") {}

Player::~Player() {
    std::cout << "Player destructor called\n";
}

Player& Player::operator=(const Player& other) {
    if (this == &other) {
        return *this;
    }

    name = other.name;
    alive = other.alive;
    playerinv = other.playerinv;
    return *this;
}

bool Player::hasItem(std::string itemid) {
  return playerinv.hasItem(itemid);
}

void Player::addItem(std::string itemid) {
  playerinv.addItem(itemid);
}

void Player::remItem(std::string itemid) {
  playerinv.remItem(itemid);
}

void Player::listItem() {
  playerinv.listItems();
}

bool Player::isAlive() {
  return alive;
}

void Player::setAlive() {
  alive = true;
}

void Player::setKill() {
  alive = false;
}
