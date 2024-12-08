#include "gtest/gtest.h"
#include "InteractEnvironment.hpp"
#include "Environment.hpp"

TEST(InteractEnvironmentTest, GetName) {
    InteractEnvironment interactEnv;
    
    Environment validEnv;
    EXPECT_EQ(interactEnv.getName(&validEnv), "Unknowm Place");

    PassenegerCart passengerCart;
    EXPECT_EQ(interactEnv.getName(&passengerCart), "Passenger Cart");

    DiningCart diningCart;
    EXPECT_EQ(interactEnv.getName(&diningCart), "Dining Cart");

    EXPECT_EQ(interactEnv.getName(nullptr), "null");
}

TEST(InteractEnvironmentTest, GetDesc) {
    InteractEnvironment interactEnv;

    Environment validEnv;
    EXPECT_EQ(interactEnv.getDesc(&validEnv), 
    "You are in an unknown place.");

    PassenegerCart passengerCart;
    EXPECT_EQ(interactEnv.getDesc(&passengerCart), 
    "Looking around the environment, you see passeneger, and a ticket master walking around");

    DiningCart diningCart;
    EXPECT_EQ(interactEnv.getDesc(&diningCart), 
    "You are in the dining cart.The smell of food fills the air.");

    EXPECT_EQ(interactEnv.getDesc(nullptr), "");
}

TEST(InteractEnvironmentTest, GetHelp) {
    InteractEnvironment interactEnv;

    Environment validEnv;
    EXPECT_EQ(interactEnv.getHelp(&validEnv),
    "Help is not implemented yet.");

    PassenegerCart passengerCart;
    EXPECT_EQ(interactEnv.getHelp(&passengerCart),
    "You can ask the ticket master for help.");

    DiningCart diningCart;
    EXPECT_EQ(interactEnv.getHelp(&diningCart),
    "You can ask the chef for help.");

    // Test with nullptr
    EXPECT_EQ(interactEnv.getHelp(nullptr), "");
}

TEST(InteractEnvironmentTest, GetPuzzles) {
    InteractEnvironment interactEnv;

    Environment validEnv;
    std::vector<std::string> puzzles = interactEnv.getPuzzles(&validEnv);
    EXPECT_EQ(puzzles.size(), 1);
    EXPECT_EQ(puzzles[0], "Empty Puzzle");

    PassenegerCart passengerCart;
    puzzles = interactEnv.getPuzzles(&passengerCart);
    EXPECT_EQ(puzzles.size(), 4);
    EXPECT_EQ(puzzles[0], "Talk to Ticket Master");
    EXPECT_EQ(puzzles[1], "Talk to Rich Lady");
    EXPECT_EQ(puzzles[2], "Talk to bouncer");
    EXPECT_EQ(puzzles[3], "Pick a seat");

    DiningCart diningCart;
    puzzles = interactEnv.getPuzzles(&diningCart);
    EXPECT_EQ(puzzles.size(), 2);
    EXPECT_EQ(puzzles[0], "Talk to Rich Lady");
    EXPECT_EQ(puzzles[1], "Talk to bouncer");

    std::vector<std::string> emptyPuzzles = interactEnv.getPuzzles(nullptr);
    EXPECT_EQ(emptyPuzzles.size(), 0);
}
