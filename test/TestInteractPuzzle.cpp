/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */
#include "gtest/gtest.h"
#include "InteractPuzzle.hpp"

InteractPuzzle interactPuzzle;
Player player {"Bob"};

std::vector<std::string> puzzleData{"puz1", "puz2"};
bool changeEnv false;

Puzzle mockPuzzle{puzzleData, player, changeEnv};
Puzzle* nullPuzzle = nullptr;

TEST(InteractPuzzleTest, GetPuzzle) {
    std::vector<std::string> actual = interactPuzzle.getPuzzle(&mockPuzzle);
    EXPECT_EQ(actual, puzzleData);
}
