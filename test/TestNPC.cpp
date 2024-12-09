#include <gtest/gtest.h>
#include "NPC.hpp"

TEST(NPCTest, DefaultConstructor) {
    NPC* npc = new ticketMaster();
    EXPECT_EQ(npc->getName(), "Ticket Master");
    EXPECT_EQ(npc->getDialogue(0), "Ticket Master: Welcome aboard!");
    delete npc;
}

TEST(RichLadyTest, DefaultConstructor) {
    NPC* lady = new richLady();
    EXPECT_EQ(lady->getName(), "Rich Lady");
    EXPECT_EQ(lady->getDialogue(0), "Rich Lady: Would you like some tea?");
    delete lady;
}

TEST(BouncerTest, DefaultConstructor) {
    NPC* bouncer = new bouncer();
    EXPECT_EQ(bouncer->getName(), "Bouncer");
    EXPECT_EQ(bouncer->getDialogue(0), "Bouncer: Ticket?");
    delete bouncer;
}

TEST(HelpfulPassengerTest, DefaultConstructor) {
    NPC* passenger = new helpfullPassenger();
    EXPECT_EQ(passenger->getName(), "Helpful Passenger");
    EXPECT_EQ(passenger->getDialogue(0), "Helpful Passenger: Need any help?");
    delete passenger;
}

TEST(GamblingOutlawTest, DefaultConstructor) {
    NPC* outlaw = new gamblingOutlaw();
    EXPECT_EQ(outlaw->getName(), "Gambling Outlaw");
    EXPECT_EQ(outlaw->getDialogue(0), "Gambling Outlaw: Care for a game?");
    delete outlaw;
}

TEST(GangLeaderTest, DefaultConstructor) {
    NPC* leader = new gangLeader();
    EXPECT_EQ(leader->getName(), "Gang Leader");
    EXPECT_EQ(leader->getDialogue(0), "Gang Leader: You're in the wrong place!");
    delete leader;
}

TEST(TiedUpTicketMasterTest, DefaultConstructor) {
    NPC* tm = new tiedUpTicketMaster();
    EXPECT_EQ(tm->getName(), "Tied Up Ticket Master");
    EXPECT_EQ(tm->getDialogue(0), "Tied Up Ticket Master: Help me!");
    delete tm;
}
