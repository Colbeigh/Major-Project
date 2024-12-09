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
    EXPECT_EQ(output,
     "\x1B[95mTicket Master\x1B[0m: Welcome aboard, may I see your ticket?");
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
    NPC* bounce = new bouncer();
    EXPECT_EQ(bounce->getName(), "Bouncer");
    testing::internal::CaptureStdout();
    bounce->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Bouncer: Ticket?\n");
    delete bounce;
}

TEST(HelpfulPassengerTest, DefaultConstructor) {
    NPC* passenger = new helpfullPassenger();
    EXPECT_EQ(passenger->getName(), "Helpful Passenger");
    testing::internal::CaptureStdout();
    passenger->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output,
     "\x1B[38;5;193mHelpful Passenger\x1B[0m: "
     "Oh! Hey there. You need my help?\n");
    delete passenger;
}

TEST(GamblingOutlawTest, DefaultConstructor) {
    NPC* outlaw = new gamblingOutlaw();
    EXPECT_EQ(outlaw->getName(), "Gambling Outlaw");
    testing::internal::CaptureStdout();
    outlaw->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output,
     "\x1B[38;5;124mGambling Outlaw\x1B[0m: So you're that policeman that"
    " has been causing trouble for us.");
    delete outlaw;
}

TEST(GangLeaderTest, DefaultConstructor) {
    NPC* leader = new gangLeader();
    EXPECT_EQ(leader->getName(), "Gang Leader");
    testing::internal::CaptureStdout();
    leader->displayDialogue(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output,
    "\x1B[38;5;130mO'Driscoll Leader\x1B[0m:"
    " Well, well, Sheriff, ain't this a sight? You thought\nyou"
    " could lock me up, toss the key, and forget ol\nO'Driscoll, didn't ya?"
    " Thought you were the big\nman, ridin high on "
    "that shiny badge."
    " But here I am,\nfree as a bird and twice as mean. "
    "While you\xE2\x80\x99re out\nthere"
    " twiddlin your thumbs, I've been plannin somethin\nspectacular. "
    "This train? Oh, it's gonna be my\nmasterpiece."
    " You ever wonder what it feels like to\nwatch your whole world burn?\n");
    delete leader;
}

TEST(TiedUpTicketMasterTest, DefaultConstructor) {
    NPC* tm = new tiedUpTicketMaster();
    EXPECT_EQ(tm->getName(), "Tied Up Ticket Master");
    testing::internal::CaptureStdout();
    tm->displayDialogue(0);
    std::string output =
    testing::internal::GetCapturedStdout();
    EXPECT_EQ(output,
    "Tied Up Ticket Master: Help me!\n");
    delete tm;
}
