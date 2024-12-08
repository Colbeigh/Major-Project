#include "gtest/gtest.h"
#include "Item.hpp"

TEST(ItemTest, ConstructorAndClone) {
    Ticket ticket;
    EXPECT_EQ(ticket.getName(), "Train Ticket");
    EXPECT_EQ(ticket.getDesc(), "Unpunched ticket");

    Item* ticketClone = ticket.clone();
    EXPECT_NE(ticketClone, nullptr);
    EXPECT_EQ(ticketClone->getName(), "Train Ticket");
    EXPECT_EQ(ticketClone->getDesc(), "Unpunched ticket");
    EXPECT_TRUE(dynamic_cast<Ticket*>(ticketClone) != nullptr);

    PunchedTicket punchedTicket;
    EXPECT_EQ(punchedTicket.getName(), "Punched Train Ticket");
    EXPECT_EQ(punchedTicket.getDesc(), "The words help are punched into it");

    Item* punchedTicketClone = punchedTicket.clone();
    EXPECT_NE(punchedTicketClone, nullptr);
    EXPECT_EQ(punchedTicketClone->getName(), "Punched Train Ticket");
    EXPECT_EQ(punchedTicketClone->getDesc(), "The words help are punched into it");
    EXPECT_TRUE(dynamic_cast<PunchedTicket*>(punchedTicketClone) != nullptr);  // Ensure it is a PunchedTicket
    delete punchedTicketClone;

    GamblingTicket gamblingTicket;
    EXPECT_EQ(gamblingTicket.getName(), "Gambling Ticket");
    EXPECT_EQ(gamblingTicket.getDesc(), "VIP Access to the gambling car");

    Item* gamblingTicketClone = gamblingTicket.clone();
    EXPECT_NE(gamblingTicketClone, nullptr);
    EXPECT_EQ(gamblingTicketClone->getName(), "Gambling Ticket");
    EXPECT_EQ(gamblingTicketClone->getDesc(), "VIP Access to the gambling car");
    EXPECT_TRUE(dynamic_cast<GamblingTicket*>(gamblingTicketClone) != nullptr);  // Ensure it is a GamblingTicket
    delete gamblingTicketClone;

    Quarter quarter;
    EXPECT_EQ(quarter.getName(), "Lucky Quarter");
    EXPECT_EQ(quarter.getDesc(), "It's just an ordinary quarter, it kinda smells");

    Item* quarterClone = quarter.clone();
    EXPECT_NE(quarterClone, nullptr);
    EXPECT_EQ(quarterClone->getName(), "Lucky Quarter");
    EXPECT_EQ(quarterClone->getDesc(), "It's just an ordinary quarter, it kinda smells");
    EXPECT_TRUE(dynamic_cast<Quarter*>(quarterClone) != nullptr);
    delete quarterClone;
}
