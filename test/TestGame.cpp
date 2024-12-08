#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <limits>
#include "Game.hpp"

TEST(TestGame, StartInitializesPlayerAndGameLoop) {
    Game game;
    game.Start();

    EXPECT_TRUE(game.player.isAlive());
    EXPECT_TRUE(game.player.hasItem("Ticket"));
}
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
    EXPECT_TRUE(output.str().find("PunchedTicket") != std::string::npos);

    std::cout.rdbuf(old);
}

TEST(TestGame, QuitTest) {
    Game game;
    std::stringstream input_stream("4\n");
    std::cin.rdbuf(input_stream.rdbuf());

    int result = game.userInput(3);
    EXPECT_EQ(result, 4);
}

TEST(TestGame, PuzzleFlowTest) {
    Game game;

    std::string puzzleName = "TicketPuzzle";
    game.createPuzzle(puzzleName);

    game.intpuz.startPuzzle(game.currentpuzzle, game.player, {}, false);

    EXPECT_NE(game.currentpuzzle, nullptr);
    EXPECT_TRUE(game.player.isAlive());
}