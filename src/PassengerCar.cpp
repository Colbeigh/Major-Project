
#include "PassengerCar.hpp"

PassengerCar::PassengerCar() {
    name = "Passenger Car";
    environmentDescription = "Looking around the environment, "
    "you see passeneger, and a ticket master walking around";
    puzzles = {"puzzle2", "puzzle3"};
}


std::string PassengerCar::getEnviroment() {
    return "Passenger Car: A Place for travelers with seating";
}
