#include "pch.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Passenger.h"

TEST(PassengerTest, ConstructorTest) {

    Passenger passenger("John Doe", "A1234567", "T123456");

    EXPECT_EQ(passenger.getName(), "John Doe");
    EXPECT_EQ(passenger.getPassportNumber(), "A1234567");
    EXPECT_EQ(passenger.getTicketNumber(), "T123456");
}

TEST(PassengerTest, CheckInTest) {

    Passenger passenger("John Doe", "A1234567", "T123456");

    testing::internal::CaptureStdout();
    passenger.checkIn();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "John Doe has successfully checked in for the flight.\n");
}

TEST(PassengerTest, CancelTicketTest) {

    Passenger passenger("John Doe", "A1234567", "T123456");

    testing::internal::CaptureStdout();
    passenger.cancelTicket();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "John Doe has canceled the ticket with number: T123456\n");
}

TEST(PassengerTest, GetterTest) {

    Passenger passenger("John Doe", "A1234567", "T123456");

    EXPECT_EQ(passenger.getName(), "John Doe");
    EXPECT_EQ(passenger.getPassportNumber(), "A1234567");
    EXPECT_EQ(passenger.getTicketNumber(), "T123456");
}

TEST(PassengerTest, FullCoverageTest) {
 
    Passenger passenger("John Doe", "A1234567", "T123456");

    testing::internal::CaptureStdout();
    passenger.checkIn();
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "John Doe has successfully checked in for the flight.\n");

    testing::internal::CaptureStdout();
    passenger.cancelTicket();
    EXPECT_EQ(testing::internal::GetCapturedStdout(), "John Doe has canceled the ticket with number: T123456\n");

    EXPECT_EQ(passenger.getName(), "John Doe");
    EXPECT_EQ(passenger.getPassportNumber(), "A1234567");
    EXPECT_EQ(passenger.getTicketNumber(), "T123456");
}
