#ifndef PASSENGERCAR_HPP
#define PASSENGERCAR_HPP
#include "TrainCart.hpp"

class PassengerCar : public Environment {
 public:
  PassengerCar();
  std::string getEnviroment() override;
};

#endif //PASSENGERCAR_HPP