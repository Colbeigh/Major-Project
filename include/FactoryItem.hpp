/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#ifndef FACTORYITEM_HPP
#define FACTORYITEM_HPP

#include <string>
#include <map>
#include "Item.hpp"

class FactoryItem {
 public:
  FactoryItem();
  Item* createItem(const std::string& name);
  std::map<std::string, Item*> itemmap;
};

#endif
