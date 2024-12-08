#include "gtest/gtest.h"
#include "FactoryItem.hpp"
#include "Item.hpp"

TEST(FactoryItemTest, CreateItem) {
    FactoryItem factory;

    Item* ticketItem = factory.createItem("Ticket");
    EXPECT_NE(ticketItem, nullptr);
    EXPECT_EQ(ticketItem->getName(), "Ticket");

    Item* punchedTicketItem = factory.createItem("PunchedTicket");
    EXPECT_NE(punchedTicketItem, nullptr);
    EXPECT_EQ(punchedTicketItem->getName(), "PunchedTicket");

    Item* gamblingTicketItem = factory.createItem("GamblingTicket");
    EXPECT_NE(gamblingTicketItem, nullptr);
    EXPECT_EQ(gamblingTicketItem->getName(), "GamblingTicket");

    Item* quarterItem = factory.createItem("Quarter");
    EXPECT_NE(quarterItem, nullptr);
    EXPECT_EQ(quarterItem->getName(), "Quarter");

    Item* defaultItem = factory.createItem("InvalidItem");
    EXPECT_NE(defaultItem, nullptr);
    EXPECT_EQ(defaultItem->getName(), "Ticket");

    delete ticketItem;
    delete punchedTicketItem;
    delete gamblingTicketItem;
    delete quarterItem;
    delete defaultItem;
}
