/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */
#include <algorithm>
#include "gtest/gtest.h"
#include "Puzzle.hpp"
#include "FactoryPuzzle.hpp"

TEST(PuzzleTest, AddPuzzleTest) {
    ticketPuzzle puzzle;
    puzzle.addPuzzle("puz1");
    puzzle.addPuzzle("puz2");
    std::cout << "adding puzzles\n";
    EXPECT_EQ(puzzle.puzz.size(), 2);
    EXPECT_EQ(puzzle.puzz[0], "puz1");
    EXPECT_EQ(puzzle.puzz[1], "puz2");
}

TEST(PuzzleTest, RemPuzzleTest) {
    ticketPuzzle puzzle;
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
    EXPECT_EQ(std::find(puzzle.puzz.begin(), puzzle.puzz.end(),
    "puz2"), puzzle.puzz.end());
    EXPECT_EQ(puzzle.puzz[0], "puz1");
    EXPECT_EQ(puzzle.puzz[1], "puz3");
}

