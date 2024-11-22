#ifndef PASSENGERCAR_HPP
#define PASSENGERCAR_HPP

#include <iostream>
#include "TrainCart.hpp"

class Passengercar : public TrainCart {
 public: 
    Passengercar();
    virtual ~Passengercar();
    void Description() override;
};

#endif //PASSENGERCAR_HPP
