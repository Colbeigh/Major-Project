#ifndef DININGCAR_HPP
#define DININGCAR_HPP

#include <string>
#include "Environment.hpp"

class DiningCar : public Environment {
 public:
    DiningCar();
    std::string getEnviroment() override;
};

#endif //DININGCAR_HPP