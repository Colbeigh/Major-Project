/**
 * @author Nikita Evtushenko <nikita.evtushenko@uleth.ca>
 * @author
 * @date Fall 2024
 */
#include <gtest/gtest.h>
#include "NPC.hpp"

TEST(NPCTest, DefaultConstructor) {
    NPC* npc = new ticketMaster();
    EXPECT_EQ(npc->getName(), "Ticket Master");
    testing::internal::CaptureStdout();
    npc->displayDialogue(0); 
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Ticket Master: Welcome aboard!\n");
    delete npc;
}

TEST(RichLadyTest, DefaultConstructor) {
    NPC* lady = new richLady();
    EXPECT_EQ(lady->getName(), "Rich Lady");
    testing::internal::CaptureStdout();
    lady->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Rich Lady: Would you like some tea?\n");
    delete lady;
}

TEST(BouncerTest, DefaultConstructor) {
    NPC* bouncer = new bouncer();
    EXPECT_EQ(bouncer->getName(), "Bouncer");
    testing::internal::CaptureStdout();
    bouncer->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Bouncer: Ticket?\n");
    delete bouncer;
}

TEST(HelpfulPassengerTest, DefaultConstructor) {
    NPC* passenger = new helpfullPassenger();
    EXPECT_EQ(passenger->getName(), "Helpful Passenger");
    testing::internal::CaptureStdout();
    passenger->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Helpful Passenger: Need any help?\n");
    delete passenger;
}

TEST(GamblingOutlawTest, DefaultConstructor) {
    NPC* outlaw = new gamblingOutlaw();
    EXPECT_EQ(outlaw->getName(), "Gambling Outlaw");
    testing::internal::CaptureStdout();
    outlaw->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Gambling Outlaw: Care for a game?\n");
    delete outlaw;
}

TEST(GangLeaderTest, DefaultConstructor) {
    NPC* leader = new gangLeader();
    EXPECT_EQ(leader->getName(), "Gang Leader");
    testing::internal::CaptureStdout();
    leader->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Gang Leader: You're in the wrong place!\n");
    delete leader;
}

TEST(TiedUpTicketMasterTest, DefaultConstructor) {
    NPC* tm = new tiedUpTicketMaster();
    EXPECT_EQ(tm->getName(), "Tied Up Ticket Master");
    testing::internal::CaptureStdout();
    tm->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Tied Up Ticket Master: Help me!\n");
    delete tm;
}
