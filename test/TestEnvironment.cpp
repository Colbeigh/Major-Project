#include <gtest/gtest.h>
#include "Environment.hpp"

// Test Environment class
TEST(EnvironmentTest, DefaultConstructor) {
    Environment env;
    EXPECT_EQ(env.getDescription(), "You are in an unknown place.");
    EXPECT_EQ(env.getPuzzles(), {"Empty Puzzle"});
    EXPECT_EQ(env.getName(), "Unknowm Place");
    EXPECT_EQ(env.help(), "Help is not implemented yet.");
}

// Test PassenegerCart class
TEST(PassenegerCartTest, DefaultConstructor) {
    PassenegerCart cart;
    EXPECT_EQ(cart.getDescription(), "Looking around the environment,"
    "you see passeneger, and a ticket master walking around");
    EXPECT_EQ(cart.getPuzzles(), {"Talk to Ticket Master", "Talk to Rich Lady",
    "Talk to bouncer", "Pick a seat"});
    EXPECT_EQ(cart.getName(), "Passenger Cart");
    EXPECT_EQ(cart.help(), "You can ask the ticket master for help.");
}

// Test DiningCart class
TEST(DiningCartTest, DefaultConstructor) {
    DiningCart cart;
    EXPECT_EQ(cart.getDescription(), "You are in the dining cart.");
    EXPECT_EQ(cart.getPuzzles(), {"Talk to Rich Lady", "Talk to bouncer"});
    EXPECT_EQ(cart.getName(), "Dining Cart");
    EXPECT_EQ(cart.help(), "You can ask the chef for help.");
}

// Test GamblingCart class
TEST(GamblingCartTest, DefaultConstructor) {
    GamblingCart cart;
    EXPECT_EQ(cart.getDescription(), "You are in the gambling cart.");
    EXPECT_TRUE(cart.getPuzzles().empty());
    EXPECT_EQ(cart.getName(), "Gambling Cart");
    EXPECT_EQ(cart.help(), "You can ask the dealer for help.");
}

// Test LuggageCart class
TEST(LuggageCartTest, DefaultConstructor) {
    LuggageCart cart;
    EXPECT_EQ(cart.getDescription(), "You are in the luggage cart.");
    EXPECT_EQ(cart.getPuzzles(), {"Puzzle1", "Puzzle2"});
    EXPECT_EQ(cart.getName(), "Luggage Cart");
    EXPECT_EQ(cart.help(), "You can ask the porter for help.");
}

// Test ArmoryCart class
TEST(ArmoryCartTest, DefaultConstructor) {
    ArmoryCart cart;
    EXPECT_EQ(cart.getDescription(), "You are in the armory cart.");
    EXPECT_TRUE(cart.getPuzzles().empty());
    EXPECT_EQ(cart.getName(), "Armory Cart");
    EXPECT_EQ(cart.help(), "You can ask the guard for help.");
}

// Test EngineCart class
TEST(EngineCartTest, DefaultConstructor) {
    EngineCart cart;
    EXPECT_EQ(cart.getDescription(), "Looking around you see the engine");
    EXPECT_EQ(cart.getPuzzles(), {"Puzzle", "Puzzle"});
    EXPECT_EQ(cart.getName(), "Engine Cart");
    EXPECT_EQ(cart.help(), "You can ask the engineer for help.");
}
