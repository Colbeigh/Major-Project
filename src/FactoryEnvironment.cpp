#include "FactoryEnvironment.hpp"

Environment* FactoryEnvironment::createEnvironment(const std::string& type) {
    if (type == "Passenger Cart") {
        return new PassenegerCart();
    } else if (type == "Dining Cart") {
        return new DiningCart();
    }  else {
        return new PassenegerCart();
    }
}
