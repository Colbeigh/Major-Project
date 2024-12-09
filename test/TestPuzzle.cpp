/**
 * @author Jem Pineda <j.pineda@uleth.ca>
 * @date Fall 2024
 */
#include <algorithm>
#include "gtest/gtest.h"
#include "Puzzle.hpp"
#include "FactoryPuzzle.hpp"

TEST(PuzzleTest, TicketMasterPuzzleTest) {
Player player;
std::vector<std::string> puzzles = {"Talk to Ticket Master"};
ticketPuzzle puzzle;

puzzle.startPuzzle(player, puzzles, true);
EXPECT_TRUE(puzzle.failPuzzle());

player.addItem("Ticket");
EXPECT_TRUE(puzzle.solution());
}

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

TEST(PuzzleTest, StartPuzzleTest) {
    Player player;
    ticketPuzzle puzzle;
std::vector<std::string> puzzles = {"puz1", "puz2", "puz3"};
    puzzle.startPuzzle(player, puzzles, true);
    puzzle.startPuzzle(player, puzzles, true);
    EXPECT_EQ(puzzle.puzz.size(), 3);
    EXPECT_EQ(puzzle.puzz[0], "puz1");
    EXPECT_EQ(puzzle.puzz[1], "puz2");
    EXPECT_EQ(puzzle.puzz[2], "puz3");
}
