#ifndef MEDICALCAR_HPP
#define MEDICALCAR_HPP

#include "TrainCart.hpp"

class MedicalCar : public TrainCart {
 public:
    MedicalCar();
    virtual ~MedicalCar();
    void Description() override;
};

#endif //MEDICALCAR_HPP
