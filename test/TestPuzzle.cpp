/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */
#include "gtest/gtest.h"
#include "Puzzle.hpp"

Puzzle puzzle;
Player player;

TEST(PuzzleTest, AddPuzzleTest) {
    puzzle.addPuzzle("puz1");
    puzzle.addPuzzle("puz2");
    std::cout << "adding puzzles\n";
    EXPECT_EQ(puzzle.puzz.size(), 2);
    EXPECT_EQ(puzzle.puzz[0], "puz1");
    EXPECT_EQ(puzzle.puzz[1], "puz2");
}

TEST(PuzzleTest, RemPuzzleTest) {
    puzzle.addPuzzle("puz1");
    puzzle.addPuzzle("puz2");
    puzzle.addPuzzle("puz3");
    std::cout << "adding puzzles\n";
    for (const auto& p : puzzle.puzz) {
        std::cout << p << "\n";
    }
    puzzle.remPuzzle("puz2");
    std::cout << "removed puz 1\n";
    EXPECT_EQ(puzzle.puzz.size(), 2);
    EXPECT_EQ(std::find(puzzle.pizz.begin(), puzzle.puzz.end(),
    "puz2"), puzzle.puzz.end());
    EXPECT_EQ(puzzle.puzz[0], "puz1");
    EXPECT_EQ(puzzle.puzz[1], "puz3");
}

TEST(PuzzleTest, StartPuzzleTest) {
    vector<std::string> puzzles = {"puz1, puz2, puz3"};
    puzzle.startPuzzle(player, puzzles, true);
    puzzle.startPuzzle(player, puzzles, true);
    EXPECT_EQ(puzzle.puzz.size(), 3);
    EXPECT_EQ(puzzle.puzz[0], "puz1");
    EXPECT_EQ(puzzle.puzz[1], "puz2");
    EXPECT_EQ(puzzle.puzz[2], "puz3");
}

TEST(PuzzleTest, PInputValidTest) {
vector<std::string> puzzles = {"puz1, puz2, puz3"};
puzzle.startPuzzle(player, puzzles, true);
int choice = puzzle.pInput(2);
EXPECT_GE(choice, 1);
EXPECT_LE(choice, 2);
std::cout << "Player choice: " << choice << "\n";
}

TEST(PuzzleTest, PInputInvalidTest) {
vector<std::string> puzzles = {"puz1, puz2, puz3"};
puzzle.startPuzzle(player, puzzles, true);
EXPECT_GE(choice, 1);
EXPECT_LE(choice, 3);
std::cout << "Player choice after invalid input: " <<
choice << "\n";
}
