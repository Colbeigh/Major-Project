#ifndef GAMBLINGCAR_HPP
#define GAMBLINGCAR_HPP

#include "TrainCart.hpp"

class GamblingCar : public TrainCart {
 public:
    GamblingCar();
    virtual ~GamblingCar();
    void Description() override;
};

#endif //GAMBLINGCAR_HPP
