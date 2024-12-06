#include "FactoryEnvironment.hpp"

FactoryEnvironment::FactoryEnvironment() {
     environmentmap = {
        {"Passenger Cart", new PassenegerCart()},
        {"Dining Cart", new DiningCart()}
     };
}

Environment* FactoryEnvironment::createEnvironment(const std::string& type) {
    auto it = environmentmap.find(type);

    if (it != environmentmap.end()) {
        return it->second;
    } else {
        return new PassenegerCart();
    }
}
