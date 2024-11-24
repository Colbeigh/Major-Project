#ifndef MEDICALCAR_HPP
#define MEDICALCAR_HPP

#include "TrainCart.hpp"

class MedicalCar : public TrainCart {
 public:
    MedicalCar();
    virtual ~MedicalCar();
    //std::string getDescription() override
};

#endif //MEDICALCAR_HPP
