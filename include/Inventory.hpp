/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca> & Todd
 * @date Fall 2024
 */

#include <iostream>
#include <vector>
#include <string>
#include "FactoryItem.hpp"
#include "Item.hpp"

#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED
/**
* @class Inventory Inventory.hpp "Inventory.hpp"
* @brief Holds and interacts with items
*/
class Inventory {
 public:
  /**
  * @brief Default Constructor
  */
  Inventory();

  /**
  * @brief Deletes Item if it exists
  */
  virtual ~Inventory();

  /**
  * @brief Handles copying over the vector and item
  */
  Inventory& operator=(const Inventory& other);

  /**
  * @brief Checks if user has the item
  * @param Item to be checked
  */
  bool hasItem(std::string itemid);

  /**
  * @brief Checks if user has the item
  * @param Item to be added
  */
  void addItem(std::string itemid);

  /**
  * @brief Checks if user has the item
  * @param Item to be removed
  */
  void remItem(std::string itemid);

  /**
  * @brief Lists alls items in inventory
  */
  void listItems();

  /**
  * @brief Gets its name
  * @param Item to get name of
  */
  std::string getName(std::string itemid);

  /**
  * @brief Gets its description
  * @param Item to get description of
  */
  std::string getDesc(std::string itemid);

  /**
  * @brief Creates item
  * @param Item to create
  */
  void createItem(std::string itemid);

  /**
  * @brief List of all item ids
  */
  std::vector<std::string> items;

  /**
  * @brief Item currently being looked att
  */
  Item* item;

  /**
  * @brief Object to create Items
  */
  FactoryItem FacItem;
};

#endif
