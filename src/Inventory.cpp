#include <Inventory.hpp>

class Inventory {
 public:

  Inventory() : item(nullptr) {}

  virtual ~Inventory() {
    delete item;
  }

  bool hasItem(int itemid) {
    for (int i = 0; i < items.size(); ++i) {
        if (itemid == items[i]){
            return true;
        }
    }
    std::cout << "You do not have " << getName(itemid) << "\n";
    return false;
  }
  
  void additem(int itemid) {
    if(hasItem(itemid)) {
        std::cout << "You already have " << getName(itemid) <<"\n";
        return;
    }
    items.push_back(itemid);
    std:: cout << "Added " << getName(itemid) << " to inventory\n";
  }

  void remItem(int itemid){
    for (int i = 0; i < items.size(); ++i) {
        if (itemid == items[i]){
            items.erase(items.begin() + i);
            std::cout << "Used " << getName(itemid) << "\n";
            return;
        }
    }
    std::cout << "You do not have" << getName(itemid) <<"\n";
  }
  
  std::string getName(int itemid){
    createItem(itemid);
    std::string name;
    name = item -> getName();
    delete item;
    item = nullptr;
    return name;
  }

  void createItem(int itemid) {
    if (item != nullptr) {
      delete item;
      item = nullptr;
    }
    item = new Item(itemid);
  }

  vector<int> items;
  Item* item = nullptr;
};
