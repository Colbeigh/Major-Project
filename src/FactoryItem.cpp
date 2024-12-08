/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "FactoryItem.hpp"

FactoryItem::FactoryItem() {
     itemmap = {
        {"Ticket", new Ticket()},
        {"PunchedTicket", new PunchedTicket()},
        {"GamblingTicket", new GamblingTicket()},
        {"Quarter", new Quarter()}
     };
}

FactoryItem::~FactoryItem() {
    for (auto& pair : itemmap) {
        delete pair.second;
    }
}

Item* FactoryItem::createItem(const std::string& type) {
    auto it = itemmap.find(type);

    if (it != itemmap.end()) {
        return it->second->clone();
    } else {
        return new Ticket();
    }
}
