#ifndef DININGCAR_HPP
#define DININGCAR_HPP

#include "TrainCart.hpp"

class DiningCar : public TrainCart {
 public:
    DiningCar();
    virtual ~DiningCar();
    void Description() override;
};

#endif //DININGCAR_HPP
