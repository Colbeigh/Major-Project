/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */

#include "FactoryEnvironment.hpp"

FactoryEnvironment::FactoryEnvironment() {
     environmentmap = {
        {"Passenger Cart", new PassenegerCart()},
        {"Dining Cart", new DiningCart()}
     };
}

FactoryEnvironment::~FactoryEnvironment() {
    for (auto& pair : environmentmap) {
        delete pair.second;
    }
}

Environment* FactoryEnvironment::createEnvironment(const std::string& type) {
    auto it = environmentmap.find(type);

    if (it != environmentmap.end()) {
        return it->second;
    } else {
        return new PassenegerCart();
    }
}
