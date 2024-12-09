#include <gtest/gtest.h>
#include "NPC.hpp"

TEST(NPCTest, DefaultConstructor) {
    NPC npc;
    EXPECT_EQ(npc.getName(), "Default NPC");
    EXPECT_EQ(npc.getDialogue(0), "That dialogue line doesn't exist");
}

TEST(TicketMasterTest, DefaultConstructor) {
    ticketMaster tm;
    EXPECT_EQ(tm.getName(), "\033[95mTicket Master\033[0m");
    EXPECT_EQ(tm.getDialogue(0), "\033[95mTicket Master\033[0m: Welcome aboard, "
                                  "may I see your ticket?");
    EXPECT_EQ(tm.getDialogue(1), "\033[95mTicket Master\033[0m: Thank you for "
                                  "travelling with us. Enjoy the ride!");
}

TEST(RichLadyTest, DefaultConstructor) {
    richLady lady;
    EXPECT_EQ(lady.getName(), "\033[33mRich Lady\033[0m");
    EXPECT_EQ(lady.getDialogue(0), "\033[33mRich Lady\033[0m: Oh you're so sweet, "
                                  "you do know how to make a lady blush");
    EXPECT_EQ(lady.getDialogue(1), "\033[33mRich Lady\033[0m: Here take this "
                                  "ticket to the gambling car, and my lucky "
                                  "quarter. It's brought me much luck I hope it "
                                  "does the same for you");
    EXPECT_EQ(lady.getDialogue(2), "\033[33mRich Lady\033[0m: Were you just trying "
                                  "to steal my lucky quarter? How dare you!");
}

TEST(BouncerTest, DefaultConstructor) {
    bouncer b;
    EXPECT_EQ(b.getName(), "\x1B[38;5;200mBouncer\x1B[0m");
    EXPECT_EQ(b.getDialogue(0), "\x1B[38;5;200mBouncer\x1B[0m: You need a gambling "
                                "ticket to get into the casino");
    EXPECT_EQ(b.getDialogue(1), "\x1B[38;5;200mBouncer\x1B[0m: Alright you're good "
                                "to go, don't go causing any trouble in there");
    EXPECT_EQ(b.getDialogue(2), "\x1B[38;5;200mBouncer\x1B[0m: Ticket?");
}

TEST(HelpfulPassengerTest, DefaultConstructor) {
    helpfullPassenger passenger;
    EXPECT_EQ(passenger.getName(), "\x1B[38;5;193mHelpful Passenger\x1B[0m");
    EXPECT_EQ(passenger.getDialogue(0), "\x1B[38;5;193mHelpful Passenger\x1B[0m: "
                                        "Oh! Hey there. You need my help?\n");
    EXPECT_EQ(passenger.getDialogue(1), "\x1B[38;5;193mHelpful Passenger\x1B[0m: "
                                        "I'll give you a hint: The game is not what "
                                        "you think it is.\x1B[0m\n");
}

TEST(GamblingOutlawTest, DefaultConstructor) {
    gamblingOutlaw outlaw;
    EXPECT_EQ(outlaw.getName(), "\x1B[38;5;124mGambling Outlaw\x1B[0m");
    EXPECT_EQ(outlaw.getDialogue(0), "\x1B[38;5;124mGambling Outlaw\x1B[0m: So "
                                    "you're that policeman that has been causing "
                                    "trouble for us.");
    EXPECT_EQ(outlaw.getDialogue(1), "\x1B[38;5;124mGambling Outlaw\x1B[0m: "
                                    "Okay but be ready to walk away with nothing\n");
    EXPECT_EQ(outlaw.getDialogue(2), "\x1B[38;5;124mGambling Outlaw\x1B[0m: wow "
                                    "good throw. Who taught you to throw like "
                                    "that? Your mother?");
    EXPECT_EQ(outlaw.getDialogue(3), "\x1B[38;5;124mGambling Outlaw\x1B[0m: Awww!. "
                                    "What the hell. I can't see anything");
    EXPECT_EQ(outlaw.getDialogue(4), "\x1B[38;5;124mGambling Outlaw\x1B[0m: You "
                                    "throwing skills are like my drinking skills. "
                                    "HORRIBLE!");
}

TEST(GangLeaderTest, DefaultConstructor) {
    gangLeader leader;
    EXPECT_EQ(leader.getName(), "\x1B[38;5;130mO'Driscoll Leader\x1B[0m");
    EXPECT_EQ(leader.getDialogue(0), "\x1B[38;5;130mO'Driscoll Leader\x1B[0m: Well, "
                                    "well, Sheriff, ain't this a sight? You thought "
                                    "you could lock me up, toss the key, and forget "
                                    "ol O'Driscoll, didn't ya? Thought you were the "
                                    "big man, ridin high on that shiny badge. But "
                                    "here I am, free as a bird and twice as mean. "
                                    "While you’re out there twiddlin your thumbs, "
                                    "I've been plannin somethin spectacular. This "
                                    "train? Oh, it's gonna be my masterpiece. You "
                                    "ever wonder what it feels like to watch your "
                                    "whole world burn?\n");
    EXPECT_EQ(leader.getDialogue(1), "\x1B[38;5;130mO'Driscoll Leader\x1B[0m: You're "
                                    "too late!\nI have already armed the bomb\n");
}

TEST(TiedUpTicketMasterTest, DefaultConstructor) {
    tiedUpTicketMaster tm;
    EXPECT_EQ(tm.getName(), "\033[95mTied Up Ticket Master\033[0m");
    EXPECT_EQ(tm.getDialogue(0), "\033[95mTied Up Ticket Master\033[0m: MMM! MMM! \n");
    EXPECT_EQ(tm.getDialogue(1), "\033[95mTied Up Ticket Master\033[0m: You're leaving "
                                 "me here?\n");
    EXPECT_EQ(tm.getDialogue(2), "Ticket Master: Thank you for untying me. I thought "
                                 "I was going to die here\n");
    EXPECT_EQ(tm.getDialogue(3), "Ticket Master: So what now?\n");
    EXPECT_EQ(tm.getDialogue(4), "Ticket Master: Hey! Is this what you're looking for?\n");
}
