#ifndef BETWEENCARS_HPP
#define BETWEENCARS_HPP

#include "TrainCart.hpp"

class BetweenCars : public TrainCart {
 public:
    BetweenCars();
    virtual ~BetweenCars();
    void Description() override;
};

#endif //BETWEENCARS_HPP
