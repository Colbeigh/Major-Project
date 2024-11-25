#ifndef FACTORYITEM_HPP
#define FACTORYITEM_HPP

#include <string>
#include "Item.hpp"

class FactoryItem {
    public:
    static Item* createItem(const std::string& name);
};

#endif
