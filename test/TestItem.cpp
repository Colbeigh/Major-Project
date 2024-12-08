#include "gtest/gtest.h"
#include "Item.hpp"

TEST(ItemTest, ConstructorAndClone) {
    Ticket ticket;
    EXPECT_EQ(ticket.getName(), "Train Ticket");
    EXPECT_EQ(ticket.getDesc(), "Unpunched ticket");

    PunchedTicket punchedTicket;
    EXPECT_EQ(punchedTicket.getName(),
    "Punched Train Ticket");
    EXPECT_EQ(punchedTicket.getDesc(),
    "The words help are punched into it");

    GamblingTicket gamblingTicket;
    EXPECT_EQ(gamblingTicket.getName(), "Gambling Ticket");
    EXPECT_EQ(gamblingTicket.getDesc(),
    "VIP Access to the gambling car");

    Quarter quarter;
    EXPECT_EQ(quarter.getName(),
    "Lucky Quarter");
    EXPECT_EQ(quarter.getDesc(),
    "It's just an ordinary quarter, it kinda smells");
}
