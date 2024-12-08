#include "gtest/gtest.h"
#include "FactoryEnvironment.hpp"
#include "Environment.hpp"

TEST(FactoryEnvironmentTest, CreateEnvironment) {
    FactoryEnvironment factory;

    Environment* passengerCartEnv = factory.createEnvironment("Passenger Cart");
    EXPECT_NE(passengerCartEnv, nullptr);
    EXPECT_EQ(passengerCartEnv->getName(), "Passenger Cart");

    Environment* diningCartEnv = factory.createEnvironment("Dining Cart");
    EXPECT_NE(diningCartEnv, nullptr);
    EXPECT_EQ(diningCartEnv->getName(), "Dining Cart");

    Environment* defaultEnv = factory.createEnvironment("Invalid Cart");
    EXPECT_NE(defaultEnv, nullptr);
    EXPECT_EQ(defaultEnv->getName(), "Passenger Cart");

    delete passengerCartEnv;
    delete diningCartEnv;
    delete defaultEnv;
}

