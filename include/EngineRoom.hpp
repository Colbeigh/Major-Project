#ifndef ENGINEROOM_HPP
#define ENGINEROOM_HPP

#include "TrainCart.hpp"

class EngineRoom : public TrainCart {
 public:
    EngineRoom();
    virtual ~EngineRoom();
    void Description() override;
};

#endif //ENGINEROOM_HPP
