#ifndef TRAINCART_HPP
#define TRAINCART_HPP
#include <memory>
#include <string>
#include "Environment.hpp"
class TrainCart : public Environment {
 public:
    TrainCart();
    virtual ~TrainCart();
    //std::string getDescription() override
};

#endif //TRAINCART_HPP
// I don't think I even need Traincart.hpp anymore.
