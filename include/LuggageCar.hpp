#ifndef LUGGAGECAR_HPP
#define LUGGAGECAR_HPP

#include "TrainCart.hpp"

class LuggageCar : public TrainCart {
 public:
    LuggageCar();
    virtual ~LuggageCar();
    void Description() override;
};

#endif //LUGGAGECAR_HPP
