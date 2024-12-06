#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Ticket.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Passenger.h"


TEST(TicketTest, ConstructorTest) {
    Ticket ticket("T12345", "12A", 150.0);

    EXPECT_EQ(ticket.getTicketNumber(), "T12345");
    EXPECT_EQ(ticket.getSeatNumber(), "12A");
    EXPECT_EQ(ticket.getPrice(), 150.0);
}

TEST(TicketTest, IssueTicketTest) {
    Passenger passenger("John Doe", "1234567890", "T12345");
    Ticket ticket("T12345", "12A", 150.0);

    testing::internal::CaptureStdout();
    ticket.issueTicket(passenger);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Ticket issued to: John Doe"), std::string::npos);
    EXPECT_NE(output.find("Ticket Number: T12345"), std::string::npos);
    EXPECT_NE(output.find("Seat Number: 12A"), std::string::npos);
    EXPECT_NE(output.find("Price: $150"), std::string::npos);
}

TEST(TicketTest, RefundTicketTest) {
    Ticket ticket("T12345", "12A", 150.0);

    testing::internal::CaptureStdout();
    ticket.refundTicket();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Ticket with number T12345 has been refunded."), std::string::npos);
}
