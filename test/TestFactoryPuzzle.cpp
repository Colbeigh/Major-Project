#include "gtest/gtest.h"
#include "FactoryPuzzle.hpp"
#include "Puzzle.hpp"


TEST(FactoryPuzzleTest, CreatePuzzle) {
    FactoryPuzzle factory;

    Puzzle* ticketPuzzle = factory.createPuzzle("Talk to Ticket Master");
    EXPECT_NE(ticketPuzzle, nullptr);
    EXPECT_TRUE(dynamic_cast<ticketPuzzle*>(ticketPuzzle) != nullptr);

    Puzzle* doorPuzzle = factory.createPuzzle("Pick a seat");
    EXPECT_NE(doorPuzzle, nullptr);
    EXPECT_TRUE(dynamic_cast<doorPuzzle*>(doorPuzzle) != nullptr);

    Puzzle* sweetTalkPuzzle = factory.createPuzzle("Talk to Rich Lady");
    EXPECT_NE(sweetTalkPuzzle, nullptr);
    EXPECT_TRUE(dynamic_cast<sweetTalkPuzzle*>(sweetTalkPuzzle) != nullptr);

    Puzzle* bouncerPuzzle = factory.createPuzzle("Talk to bouncer");
    EXPECT_NE(bouncerPuzzle, nullptr);
    EXPECT_TRUE(dynamic_cast<bouncerPuzzle*>(bouncerPuzzle) != nullptr);

    Puzzle* defaultPuzzle = factory.createPuzzle("InvalidPuzzle");
    EXPECT_NE(defaultPuzzle, nullptr);
    EXPECT_TRUE(dynamic_cast<ticketPuzzle*>(defaultPuzzle) != nullptr);

    delete ticketPuzzle;
    delete doorPuzzle;
    delete sweetTalkPuzzle;
    delete bouncerPuzzle;
    delete defaultPuzzle;
}
