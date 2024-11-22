#ifndef PRISONCAR_HPP
#define PRISONCAR_HPP

#include "TrainCart.hpp"

class PrisonCar : public TrainCart {
public:
    PrisonCar();
    virtual ~PrisonCar();
    void Description() override;
};

#endif //PRISONCAR_HPP
