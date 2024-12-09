#include <gtest/gtest.h>
#include "Environment.hpp"

// Test Environment class
TEST(EnvironmentTest, DefaultConstructor) {
    Environment env;
    EXPECT_EQ(env.getDescription(), "You are in an unknown place.");
    EXPECT_EQ(env.getPuzzles(), (std::vector<std::string>{"Empty Puzzle"}));
    EXPECT_EQ(env.getName(), "Unknowm Place");
    EXPECT_EQ(env.help(), "Help is not implemented yet.");
}

// Test PassengerCart class
TEST(PassengerCartTest, DefaultConstructor) {
    PassengerCart cart;
    EXPECT_EQ(cart.getDescription(),
              "Looking around, you see lots of passengers, and a ticket master walking "
              "around\n");
    EXPECT_EQ(cart.getPuzzles(), (std::vector<std::string>{"Pick a seat"}));
    EXPECT_EQ(cart.getName(), "Passenger Cart");
    EXPECT_EQ(cart.help(), "Give him your Ticket.\n");
}

// Test DiningCart class
TEST(DiningCartTest, DefaultConstructor) {
    DiningCart cart;
    EXPECT_EQ(cart.getDescription(),
              "The smell of food fills the air.\nYou see a Rich looking lady eating food "
              "and a bouncer across the cart guarding a door\n");
    EXPECT_EQ(cart.getPuzzles(), (std::vector<std::string>{"Talk to Rich Lady", "Talk to bouncer"}));
    EXPECT_EQ(cart.getName(), "Dining Cart");
    EXPECT_EQ(cart.help(), "Talk to the bouncer.");
}

// Test GamblingCart class
TEST(GamblingCartTest, DefaultConstructor) {
    GamblingCart cart;
    EXPECT_EQ(cart.getDescription(),
              "It riques of ciggarettes and beer You notice a gruff looking dealer and a "
              "friendly looking passenger smiling at you\n");
    EXPECT_EQ(cart.getPuzzles(),
              (std::vector<std::string>{"Talk to HelpfulPassenger", "Talk to GamblingOutlaw"}));
    EXPECT_EQ(cart.getName(), "Gambling Cart");
    EXPECT_EQ(cart.help(), "You should talk to the friendly looking passenger.\n");
}

// Test LuggageCart class
TEST(LuggageCartTest, DefaultConstructor) {
    LuggageCart cart;
    EXPECT_EQ(cart.getDescription(), "Its full of luggage\n");
    EXPECT_EQ(cart.getPuzzles(), (std::vector<std::string>{"Catch a breath"}));
    EXPECT_EQ(cart.getName(), "Luggage Cart");
    EXPECT_EQ(cart.help(), "Look for the luggage on the piece of paper");
}

// Test ArmoryCart class
TEST(ArmoryCartTest, DefaultConstructor) {
    ArmoryCart cart;
    EXPECT_EQ(cart.getDescription(),
              "Has a heavy open door with metal barricades, has a metal rack full of stuff "
              "on the top shelf\n");
    EXPECT_EQ(cart.getPuzzles(), (std::vector<std::string>{"Look around the armory"}));
    EXPECT_EQ(cart.getName(), "Armory Cart");
    EXPECT_EQ(cart.help(), "Think twice before choosing\n");
}

// Test EngineCart class
TEST(EngineCartTest, DefaultConstructor) {
    EngineCart cart;
    EXPECT_EQ(cart.getDescription(),
              "You see a silhouette and plumes of smoke\n");
    EXPECT_EQ(cart.getPuzzles(), (std::vector<std::string>{"Approach the Gang Leader"}));
    EXPECT_EQ(cart.getName(), "Engine Cart");
    EXPECT_EQ(cart.help(), "Remember you have a gun\n");
}

TEST(FailedEngineCartTests, DefaultConstructor) {
    EngineCart cart;
    
    // Test that the description does not match an incorrect value
    EXPECT_NE(cart.getDescription(), "You see a silhouette and plumes of smoke.\n");

    // Test that puzzles do not match an incorrect value
    EXPECT_NE(cart.getPuzzles(), std::vector<std::string>{"Approach the Gang Leader."});

    // Test that the name does not match an incorrect value
    EXPECT_NE(cart.getName(), "Engine Cart.");

    // Test that the help message does not match an incorrect value
    EXPECT_NE(cart.help(), "Remember you have a gun.\n");
}
