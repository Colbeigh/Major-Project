/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @author Todd Across The Mountain <t.acrossthemountain@uleth.ca>
 * @date Fall 2024
 */
#include "Inventory.hpp"

Inventory::Inventory() : item(nullptr) {}

Inventory::~Inventory() {
  if (item == nullptr) {
    delete item;
    item = nullptr;
  }
}

Inventory& Inventory::operator=(const Inventory& other) {
    if (this == &other) {
        return *this;
    }
    items = other.items;

    if (other.item != nullptr) {
        delete item;
        item = nullptr;
    } else {
        item = nullptr;
    }
    FacItem = other.FacItem;
    return *this;
}

bool Inventory::hasItem(std::string itemid) {
  for (int i = 0; i < items.size(); ++i) {
      if (itemid == items[i]) {
           return true;
      }
  }
  std::cout << "You do not have " << getName(itemid) << "\n";
  return false;
}

void Inventory::addItem(std::string itemid) {
  if (hasItem(itemid)) {
      std::cout << "You already have " << getName(itemid) <<"\n";
      return;
  }
  items.push_back(itemid);
  std:: cout << "Added " << getName(itemid) << " to inventory\n";
}

void Inventory::remItem(std::string itemid) {
  for (int i = 0; i < items.size(); ++i) {
       if (itemid == items[i]) {
           items.erase(items.begin() + i);
          std::cout << "Used " << getName(itemid) << "\n";
          return;
      }
  }
  std::cout << "You do not have" << getName(itemid) <<"\n";
}

void Inventory::listItems() {
  if (items.empty()) {
    std::cout << "You currently have no items" << std::endl;
  }
  for (int i = 0; i < items.size(); ++i) {
      std::cout << "* " << getName(items[i]) << "\n   -"
      << getDesc(items[i]) << std::endl;
      }
}


std::string Inventory::getName(std::string itemid) {
  createItem(itemid);
  std::string name;
  name = item -> getName();
  delete item;
  item = nullptr;
  return name;
}

std::string Inventory::getDesc(std::string itemid) {
  createItem(itemid);
  std::string name;
  name = item -> getDesc();
  delete item;
  item = nullptr;
  return name;
}

void Inventory::createItem(std::string itemid) {
  if (item != nullptr) {
     delete item;
     item = nullptr;
  }
  item = FacItem.createItem(itemid);
}
