#include "gtest/gtest.h"
#include "FactoryPuzzle.hpp"
#include "Puzzle.hpp"


TEST(FactoryPuzzleTest, CreatePuzzle) {
    FactoryPuzzle factory;

    Puzzle* ticketPuzzleItem = factory.createPuzzle("Talk to Ticket Master");
    EXPECT_NE(ticketPuzzleItem, nullptr);
    EXPECT_TRUE(dynamic_cast<ticketPuzzle*>(ticketPuzzleItem) != nullptr);

    Puzzle* doorPuzzleItem = factory.createPuzzle("Pick a seat");
    EXPECT_NE(doorPuzzleItem, nullptr);
    EXPECT_TRUE(dynamic_cast<doorPuzzle*>(doorPuzzleItem) != nullptr);

    Puzzle* sweetTalkPuzzleItem = factory.createPuzzle("Talk to Rich Lady");
    EXPECT_NE(sweetTalkPuzzleItem, nullptr);
    EXPECT_TRUE(dynamic_cast<sweetTalkPuzzle*>(sweetTalkPuzzleItem) != nullptr);

    Puzzle* bouncerPuzzleItem = factory.createPuzzle("Talk to bouncer");
    EXPECT_NE(bouncerPuzzleItem, nullptr);
    EXPECT_TRUE(dynamic_cast<bouncerPuzzle*>(bouncerPuzzleItem) != nullptr);

    Puzzle* defaultPuzzle = factory.createPuzzle("InvalidPuzzle");
    EXPECT_NE(defaultPuzzle, nullptr);
    EXPECT_TRUE(dynamic_cast<ticketPuzzle*>(defaultPuzzle) != nullptr);

    delete ticketPuzzleItem;
    delete doorPuzzleItem;
    delete sweetTalkPuzzleItem;
    delete bouncerPuzzleItem;
    delete defaultPuzzle;
}
