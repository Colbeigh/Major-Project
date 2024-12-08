/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "FactoryItem.hpp"

FactoryItem::FactoryItem() {
    itemmap = {
        {"Ticket", []() { return new Ticket(); }},
        {"PunchedTicket", []() { return new PunchedTicket(); }},
        {"GamblingTicket", []() { return new GamblingTicket(); }},
        {"Quarter", []() { return new Quarter(); }}
    };
}

FactoryItem::~FactoryItem() {
    itemmap.clear();
}

Item* FactoryItem::createItem(const std::string& type) {
    auto it = itemmap.find(type);

    if (it != itemmap.end()) {
        return it->second();
    } else {
        return new Ticket();
    }
}
