
#include "PassengerCar.hpp"
#include <vector>
PassengerCar::PassengerCar() {
    name = "Passenger Car";
    environmentDescription = "Looking around the environment,you see passeneger, and a ticket master walking around";
    puzzle = {"puzzle1"};
}


std::string PassengerCar::getEnviroment() {
    return "Passenger Car: A Place for travelers with seating";
}
