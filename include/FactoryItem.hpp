/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#ifndef FACTORYITEM_HPP
#define FACTORYITEM_HPP

#include <string>
#include <map>
#include <functional>
#include "Item.hpp"
/**
* @class FactoryItem FactoryItem.hpp
* "FactoryItem.hpp"
* @brief Creates items
*/

class FactoryItem {
 public:
   /**
   * @brief Sets up map holding keys to which environment
   */
  FactoryItem();

  /**
   * @brief Deletes map
   */
  virtual ~FactoryItem();

  /**
   * @brief Goes through map and returns a new item
   * based off input
   */
  Item* createItem(const std::string& name);

  /**
   * @brief Map holding all Items that can be created
   */
  std::map<std::string, std::function<Item*()>> itemmap;
};

#endif
