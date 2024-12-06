#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Security.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Passenger.h"

TEST(SecurityTest, ConstructorAndGetters) {

    Security security("Main Gate", true);

    EXPECT_EQ(security.getCheckpointName(), "Main Gate");
    EXPECT_TRUE(security.getIsActive());
}

TEST(SecurityTest, CheckPassengerActiveTest) {

    Passenger passenger("John Doe", "A12345678", "T123456");

    Security security("Main Gate", true);

    std::stringstream output;
    std::streambuf* original = std::cout.rdbuf(output.rdbuf()); 

    security.checkPassenger(passenger);

    EXPECT_NE(output.str().find("Passenger John Doe has been checked at checkpoint Main Gate."), std::string::npos);

    std::cout.rdbuf(original);
}

TEST(SecurityTest, CheckPassengerInactiveTest) {

    Passenger passenger("John Doe", "A12345678", "T123456");

    Security security("Main Gate", false);

    std::stringstream output;
    std::streambuf* original = std::cout.rdbuf(output.rdbuf()); 

    security.checkPassenger(passenger);

    EXPECT_NE(output.str().find("Checkpoint Main Gate is not active. Cannot check passenger John Doe."), std::string::npos);

    std::cout.rdbuf(original);
}
