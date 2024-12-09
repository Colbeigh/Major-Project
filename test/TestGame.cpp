#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <limits>
#include "Game.hpp"

TEST(TestGame, PromptPuzzles) {
    Game game;

    std::vector<std::string> puzzles = {"Puzzle 1", "Puzzle 2"};

    std::stringstream output_stream;
    std::streambuf* original_cout_buf = std::cout.rdbuf(output_stream.rdbuf());

    game.promptPuzzles(puzzles);

    std::string output = output_stream.str();

    std::string expected_output =
    "1) Puzzle 1\n2) Puzzle 2\n3) Help\n4) Inventory\n5) Quit\n";

    EXPECT_EQ(output, expected_output);

    std::cout.rdbuf(original_cout_buf);
}

TEST(TestGame, ChangeEnvironmentTest) {
    Game game;
    game.changeEnvironment();

    EXPECT_NE(game.currentenvironment, nullptr);

    std::string environmentName =
    game.intenv.getName(game.currentenvironment);
    EXPECT_TRUE(environmentName == "Passenger Cart" ||
    environmentName == "Dining Cart");
}

TEST(TestGame, ListInventoryTest) {
    Game game;
    game.player.addItem("Ticket");
    game.player.addItem("PunchedTicket");

    std::stringstream output;
    std::streambuf* old = std::cout.rdbuf(output.rdbuf());

    game.player.listItem();

    EXPECT_TRUE(output.str().find("Ticket") != std::string::npos);
    EXPECT_TRUE(output.str().find("Unpunched ticket") != std::string::npos);
    EXPECT_TRUE(output.str().find("PunchedTicket") != std::string::npos);
    EXPECT_TRUE(output.str().find("Punched ticket") != std::string::npos);

    std::cout.rdbuf(old);
}

