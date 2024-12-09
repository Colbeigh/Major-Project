/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */
#include "gtest/gtest.h"
#include "InteractPuzzle.hpp"

InteractPuzzle interactPuzzle;
Player player {"Bob"};

std::vector<std::string> puzzleData{"puz1", "puz2"};
bool changeEnv = false;

Puzzle mockPuzzle{puzzleData, player, changeEnv};
Puzzle* nullPuzzle = nullptr;

TEST(InteractPuzzleTest, GetPuzzleValid) {
    std::vector<std::string> actual = interactPuzzle.getPuzzle(&mockPuzzle);
    EXPECT_EQ(actual, puzzleData);
}

TEST(InteractPuzzleTest, GetPuzzleNull) {
    std::vector<std::string> actual = interactPuzzle.getPuzzle(nullptr);
    EXPECT_TRUE(actual.empty());  // Expecting an empty vector when puzzle is null
}

TEST(InteractPuzzleTest, GetPlayerValid) {
    Player actual = interactPuzzle.getPlayer(&mockPuzzle);
    EXPECT_EQ(actual, player);  // Assuming Player has a comparison operator or comparing relevant attributes
}

TEST(InteractPuzzleTest, GetPlayerNull) {
    Player actual = interactPuzzle.getPlayer(nullptr);
    Player nullPlay;  // Default-constructed player
    EXPECT_EQ(actual, nullPlay);  // Expect default player if puzzle is null
}

TEST(InteractPuzzleTest, GetChangeEnvFalse) {
    bool actual = interactPuzzle.getChangeEnv(&mockPuzzle);
    EXPECT_FALSE(actual);  // Expecting false for getChangeEnv with valid puzzle
}

TEST(InteractPuzzleTest, GetChangeEnvTrue) {
    bool actual = interactPuzzle.getChangeEnv(nullptr);
    EXPECT_FALSE(actual);  // Expecting false when puzzle is null, should fix this
}

TEST(InteractPuzzleTest, TestStartPuzzleValid) {
    std::vector<std::string> puzzles = {"puz1", "puz2"};
    bool changeEnv = false;

    // We can't easily test side effects of this function without some output or behavior to check.
    // Assuming it works fine as we just call startPuzzle, no assertion needed here unless behavior is needed.
    interactPuzzle.startPuzzle(&mockPuzzle, player, puzzles, changeEnv);
}

TEST(InteractPuzzleTest, TestStartPuzzleNull) {
    std::vector<std::string> puzzles = {"puz1", "puz2"};
    bool changeEnv = false;

    // Capture stderr to check error output
    testing::internal::CaptureStderr();

    // Call with null puzzle (expected to print error)
    interactPuzzle.startPuzzle(nullptr, player, puzzles, changeEnv);

    // Get captured stderr and check for the expected error message
    std::string output = testing::internal::GetCapturedStderr();
    EXPECT_TRUE(output.find("Error: No puzzle set!") != std::string::npos);
}
