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
   /**
   * @brief Sets players name
   */
  Player();

  /**
  * @brief Default destructor
  */
  virtual ~Player();

  /**
  * @brief Assignment operator to handle copying
  */
  Player& operator=(const Player& other);

  /**
  * @brief Returns users name
  */
  std::string Player::getName();

  /**
  * @brief Checks if player has the item in their inventory
  * @param Item thats being checked
  */
  bool hasItem(std::string itemid);

  /**
  * @brief Adds Item to players Inventory
  * @param Item to be added
  */
  void addItem(std::string itemid);

  /**
  * @brief Removes Item from players inventory
  * @param Item to be deleted
  */
  void remItem(std::string itemid);

  /**
  * @brief Lists all items in players inventory
  */
  void listItem();

  /**
  * @brief Checks if player is alive or dead
  */
  bool isAlive();

  /**
  * @brief Sets players Alive
  */
  void setAlive();

  /**
  * @brief Sets players Dead
  */
  void setKill();


  /**
  * @brief Players inventory object
  */
  Inventory playerinv;

  /**
  * @brief Players name
  */
  std::string name;

  /**
  * @brief Bool for if player is alive or dead
  */
  bool alive;
};

#endif
