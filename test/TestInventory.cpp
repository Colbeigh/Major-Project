#include <gtest/gtest.h>
#include "Inventory.hpp"
#include "Item.hpp"

TEST(InventoryTest, DefaultConstructor) {
    Inventory inv;
    EXPECT_FALSE(inv.hasItem("Ticket"));
}

TEST(InventoryTest, AddItem) {
    Inventory inv;
    inv.addItem("Ticket");
    EXPECT_TRUE(inv.hasItem("Ticket"));
}

TEST(InventoryTest, AddDuplicateItem) {
    Inventory inv;
    inv.addItem("Ticket");
    inv.addItem("Ticket");
    EXPECT_EQ(inv.listItems().size(), 1);
}

TEST(InventoryTest, RemoveItem) {
    Inventory inv;
    inv.addItem("Ticket");
    inv.remItem("Ticket");
    EXPECT_FALSE(inv.hasItem("Ticket"));
}

TEST(InventoryTest, RemoveNonexistentItem) {
    Inventory inv;
    inv.addItem("Ticket");
    inv.remItem("Fakegun");
    EXPECT_TRUE(inv.hasItem("Ticket"));
}

TEST(InventoryTest, ListItems) {
    Inventory inv;
    inv.addItem("Ticket");
    inv.addItem("Fakegun");
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());
    inv.listItems();
    std::string output = buffer.str();
    EXPECT_NE(output.find("Ticket"), std::string::npos);
    EXPECT_NE(output.find("Fakegun"), std::string::npos);
    std::cout.rdbuf(old);
}

TEST(InventoryTest, GetItemName) {
    Inventory inv;
    inv.addItem("Ticket");
    EXPECT_EQ(inv.getName("Ticket"), "Train Ticket");
}

TEST(InventoryTest, GetItemDescription) {
    Inventory inv;
    inv.addItem("Ticket");
    EXPECT_EQ(inv.getDesc("Ticket"), "Unpunched ticket");
}

TEST(InventoryTest, CreateItem) {
    Inventory inv;
    inv.addItem("Ticket");
    std::string itemId = "Ticket";
    inv.createItem(itemId);
    EXPECT_EQ(inv.getName(itemId), "Train Ticket");
}
