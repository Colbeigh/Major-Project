/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */
#include "gtest/gtest.h"
#include "InteractPuzzle.hpp"

InteractPuzzle interactPuzzle;
Player player;

std::vector<std::string> puzzleData{"puz1", "puz2"};
bool changeEnv false;

Puzzle mockPuzzle{puzzleData, player, changeEnv};
Puzzle* nullPuzzle = nullptr;

TEST(InteractPuzzleTest, GetPuzzleValid) {
    std::vector<std::string> actual = interactPuzzle.getPuzzle(&mockPuzzle);
    EXPECT_EQ(actual, puzzleData);
}

TEST(InteractPuzzleTest, GetPuzzleNull) {
    std::vector<std::string> actual = interactPuzzle.getPuzzle(nullptr);
    EXPECT_EQ(actual, nullptr);
}

TEST(InteractPuzzleTest, GetPlayerValid) {
    Player actual = interactPuzzle.getPlayer(&mockPuzzle);
    EXPECT_EQ(actual, player);
}

TEST(InteractPuzzleTest, GetPlayerNull) {
    Player actual = interactPuzzle.getPlayer(nullptr);
    Player nullPlay;
    EXPECT_EQ(actual, nullPlay);
}

TEST(InteractPuzzleTest, GetChangeEnvFalse) {
    bool actual = interactPuzzle.getChangeEnv(&mockPuzzle);
    EXPECT_FALSE(actual);
}

TEST(InteractPuzzleTest, GetChangeEnvTrie) {
    bool actual = interactPuzzle.getChangeEnv(nullptr);
    EXPECT_TRUE(actual);
}

TEST(InteractPuzzleTest, TestStartPuzzleValid) {
    std::vector<std::string> puzzles = {"puz1", "puz2"};
    bool changeEnv = false;

    interactPuzzle.startPuzzle(&mockPuzzle, player , puzzles, changeEnv);
}

TEST(InteractPuzzleTest, TestStartPuzzleValid) {
    std::vector<std::string> puzzles = {"puz1", "puz2"};
    bool changeEnv = false;

    interactPuzzle.startPuzzle(nullptr , player , puzzles, changeEnv);
    EXPECT_TRUE(output.find("Error: No puzzle set!") != std:: string::npos);
}
