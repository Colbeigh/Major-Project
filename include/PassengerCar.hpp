#ifndef PASSENGERCAR_HPP
#define PASSENGERCAR_HPP

#include "TrainCart.hpp"
#include <iostream>

class Passengercar : public TrainCart {
    public: 
    Passengercar();
    virtual ~Passengercar();
    void Description() override;

};

#endif //PASSENGERCAR_HPP