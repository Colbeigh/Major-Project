#ifndef PASSENGERCAR_HPP
#define PASSENGERCAR_HPP
#include "Environment.hpp"
#include <string>

class PassengerCar : public Environment {
 public:
  PassengerCar();
  std::string getEnviroment() override;
};

#endif //PASSENGERCAR_HPP
