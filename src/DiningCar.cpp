#include "DiningCar.hpp"
#include <vector>

DiningCar::DiningCar() {
    name = "Dining Car";
    environmentDescription = "Looking around the environment,you see a dining car with a few tables and chairs";
    puzzle = {"puzzle2", "puzzle3"};
}


std::string DiningCar::getEnviroment() {
    return "Dining Car: A place to eat and socialize";
}
  