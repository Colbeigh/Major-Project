#include "FactoryItem.hpp"

Item* FactoryItem::createItem(const std::string& type){
    if (type == "Ticket") {
        return new Ticket();
    } else if (type == "PunchedTicket") {
        return new PunchedTicket();
    } else if (type == "Quarter") {
        return new Quarter();
    } else {
        return nullptr;
    }
}
