#include "gtest/gtest.h"
#include "Inventory.hpp"

TEST(InventoryTest, Constructor) {
    Inventory inventory;

    EXPECT_FALSE(inventory.hasItem("Ticket"));
}

TEST(InventoryTest, AddItem) {
    Inventory inventory;

    inventory.addItem("Ticket");
    EXPECT_TRUE(inventory.hasItem("Ticket"));
    
    testing::internal::CaptureStdout();
    inventory.addItem("Ticket");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("You already have Ticket"), std::string::npos);
    
    EXPECT_TRUE(inventory.hasItem("Ticket"));
}

TEST(InventoryTest, RemItem) {
    Inventory inventory;

    inventory.addItem("Ticket");
    EXPECT_TRUE(inventory.hasItem("Ticket"));

    inventory.remItem("Ticket");
    EXPECT_FALSE(inventory.hasItem("Ticket"));
    
    testing::internal::CaptureStdout();
    inventory.remItem("NonExistentItem");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("You do not have NonExistentItem"), std::string::npos);
}

TEST(InventoryTest, ListItems) {
    Inventory inventory;

    testing::internal::CaptureStdout();
    inventory.listItems();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("You currently have no items"), std::string::npos);

    inventory.addItem("Ticket");
    inventory.addItem("Quarter");
    
    testing::internal::CaptureStdout();
    inventory.listItems();
    output = testing::internal::GetCapturedStdout();
    
    EXPECT_NE(output.find("Ticket"), std::string::npos);
    EXPECT_NE(output.find("Quarter"), std::string::npos);
}

TEST(InventoryTest, GetItemDetails) {
    Inventory inventory;

    inventory.addItem("Ticket");
    
    std::string name = inventory.getName("Ticket");
    std::string description = inventory.getDesc("Ticket");

    EXPECT_EQ(name, "Ticket");
    EXPECT_EQ(description, "Unpunched ticket");
}

TEST(InventoryTest, CopyAssignment) {
    Inventory inventory1;
    inventory1.addItem("Ticket");
    
    Inventory inventory2;
    inventory2 = inventory1;
    
    EXPECT_TRUE(inventory2.hasItem("Ticket"));
}

