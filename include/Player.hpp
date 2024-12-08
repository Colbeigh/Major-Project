/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include <iostream>
#include <string>
#include "Inventory.hpp"

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class Player {
 public:
  Player();
  virtual ~Player();
  Player& operator=(const Player& other);
  std::string Player::getName();
  bool hasItem(std::string itemid);
  void addItem(std::string itemid);
  void remItem(std::string itemid);
  void listItem();
  bool isAlive();
  void setAlive();
  void setKill();

  Inventory playerinv;
  std::string name;
  bool alive;
};

#endif
