#include "FactoryItem.hpp"

FactoryItem::FactoryItem() {
     itemmap = {
        {"Ticket", new Ticket()},
        {"PunchedTicket", new PunchedTicket()},
        {"GamblingTicket", new GamblingTicket()},
        {"Quarter", new Quarter()}
     };
}

Item* FactoryItem::createItem(const std::string& type) {
    auto it = itemmap.find(type);

    if (it != itemmap.end()) {
        return it->second;
    } else {
        return new Ticket();
    }
}
