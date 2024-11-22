#ifndef ARMORYCAR_HPP
#define ARMORYCAR_HPP

#include "TrainCart.hpp"

class ArmoryCar : public TrainCart {
    public:
        ArmoryCar();
        virtual ~ArmoryCar();
        void Description() override;
};

#endif //ARMORYCAR_HPP