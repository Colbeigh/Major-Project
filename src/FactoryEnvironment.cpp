 #include "FactoryEnvironment.hpp"

 Environment* FactoryEnvironment::createEnvironment(const std::string& type){
    if (type == "PassengerCart"){
        return new PassengerCart();
    } else if (type == "DiningCart") {
        return new DiningCart();
    }  else {
        return nullptr;
    }