#include "DiningCar.hpp"

DiningCar::DiningCar() {
    name = "Dining Car";
    environmentDescription = "Looking around the environment, "
    "you see a dining car with a few tables and chairs\n";
    puzzles = {"puzzle2", "puzzle3"};
}


std::string DiningCar::getEnviroment() {
    return "Dining Car: A place to eat and socialize";
}
