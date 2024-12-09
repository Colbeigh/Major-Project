/**
 * @author Colby Hanna <Colby.Hanna@uleth.ca>
 * @date Fall 2024
 */
#include "gtest/gtest.h"
#include "Player.hpp"

TEST(PlayerTest, Constructor) {
    Player player;

    EXPECT_EQ(player.getName(), "Default");

    EXPECT_TRUE(player.isAlive());
}

TEST(PlayerTest, AddItem) {
    Player player;

    player.addItem("Ticket");
    EXPECT_TRUE(player.hasItem("Ticket"));

    EXPECT_FALSE(player.hasItem("NonExistentItem"));
}

TEST(PlayerTest, RemItem) {
    Player player;

    player.addItem("Ticket");
    EXPECT_TRUE(player.hasItem("Ticket"));

    player.remItem("Ticket");
    EXPECT_FALSE(player.hasItem("Ticket"));
}

TEST(PlayerTest, LifeStatus) {
    Player player;

    EXPECT_TRUE(player.isAlive());

    player.setKill();
    EXPECT_FALSE(player.isAlive());

    player.setAlive();
    EXPECT_TRUE(player.isAlive());
}

TEST(PlayerTest, CopyAssignment) {
    Player player1;
    player1.addItem("Ticket");
    player1.setKill();

    Player player2;
    player2 = player1;

    EXPECT_TRUE(player2.hasItem("Ticket"));
    EXPECT_FALSE(player2.isAlive());
}

TEST(PlayerTest, ListItems) {
    Player player;

    player.addItem("Ticket");
    player.addItem("Quarter");

    testing::internal::CaptureStdout();
    player.listItem();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Ticket"), std::string::npos);
    EXPECT_NE(output.find("Quarter"), std::string::npos);
}
