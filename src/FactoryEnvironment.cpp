 #include "FactoryEnvironment.hpp"

 Environment* FactoryEnvironment::createEnvironment(const std::string& type){
    if (type == "Passenger Cart"){
        return new PassenegerCart();
    } else if (type == "DiningCart") {
        return new DiningCart();
    }  else {
        return nullptr;
    }