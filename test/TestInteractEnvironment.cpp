#include "gtest/gtest.h"
#include "InteractEnvironment.hpp"
#include "Environment.hpp"

TEST(InteractEnvironmentTest, GetName) {
    InteractEnvironment interactEnv;

    Environment validEnv;
    EXPECT_EQ(interactEnv.getName(&validEnv), "Unknowm Place");

    PassengerCart passengerCart;
    EXPECT_EQ(interactEnv.getName(&passengerCart), "Passenger Cart");

    DiningCart diningCart;
    EXPECT_EQ(interactEnv.getName(&diningCart), "Dining Cart");

    EXPECT_EQ(interactEnv.getName(nullptr), "null");
}

TEST(InteractEnvironmentTest, GetDesc) {
    InteractEnvironment interactEnv;

    Environment validEnv;
    EXPECT_EQ(interactEnv.getDesc(&validEnv), "You are in an unknown place.");

    PassengerCart passengerCart;
    std::string passengercartstring = std::string("Looking around the ") +
        "environment, you see passeneger, and a ticket master walking around";
    EXPECT_EQ(interactEnv.getDesc(&passengerCart), passengercartstring);

    DiningCart diningCart;
    EXPECT_EQ(interactEnv.getDesc(&diningCart), "The smell of food fills the air.\n"
        "You see a Rich looking lady eating food and a bouncer"
        " across the cart guarding a door\n");

    EXPECT_EQ(interactEnv.getDesc(nullptr), "");
}

TEST(InteractEnvironmentTest, GetHelp) {
    InteractEnvironment interactEnv;

    Environment validEnv;
    EXPECT_EQ(interactEnv.getHelp(&validEnv), "Help is not implemented yet.");

    PassengerCart passengerCart;
    EXPECT_EQ(interactEnv.getHelp(&passengerCart), "Give him your Ticket.\n");

    DiningCart diningCart;
    EXPECT_EQ(interactEnv.getHelp(&diningCart), "Talk to the bouncer.");

    EXPECT_EQ(interactEnv.getHelp(nullptr), "");
}

TEST(InteractEnvironmentTest, GetPuzzles) {
    InteractEnvironment interactEnv;

    Environment validEnv;
    std::vector<std::string> puzzles = interactEnv.getPuzzles(&validEnv);
    EXPECT_EQ(puzzles.size(), 1);
    EXPECT_EQ(puzzles[0], "Empty Puzzle");

    PassengerCart passengerCart;
    puzzles = interactEnv.getPuzzles(&passengerCart);
    EXPECT_EQ(puzzles.size(), 1);
    EXPECT_EQ(puzzles[0], "Pick a seat");

    DiningCart diningCart;
    puzzles = interactEnv.getPuzzles(&diningCart);
    EXPECT_EQ(puzzles.size(), 2);
    EXPECT_EQ(puzzles[0], "Talk to Rich Lady");
    EXPECT_EQ(puzzles[1], "Talk to bouncer");

    std::vector<std::string> emptyPuzzles = interactEnv.getPuzzles(nullptr);
    EXPECT_EQ(emptyPuzzles.size(), 0);
}
