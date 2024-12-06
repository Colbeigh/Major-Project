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

Item* FactoryItem::createItem(const std::string& type) {
    if (type == "Ticket") {
        return new Ticket();
    } else if (type == "PunchedTicket") {
        return new PunchedTicket();
    } else if (type == "GamblingTicket") {
        return new GamblingTicket();
    } else if (type == "Quarter") {
        return new Quarter();
    } else {
        return nullptr;
    }
}
