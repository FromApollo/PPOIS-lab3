#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Baggage.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Passenger.h"

TEST(BaggageTest, ConstructorTest) {
    Baggage baggage(25, "John Doe");

    EXPECT_EQ(baggage.getWeight(), 25);
    EXPECT_EQ(baggage.getOwnerName(), "John Doe");
}

TEST(BaggageTest, TagBaggageTest) {
    Passenger passenger("Alice", "1234567890", "T12345");
    Baggage baggage(15, "");

    baggage.tagBaggage(passenger);

    EXPECT_EQ(baggage.getOwnerName(), "Alice");
}

TEST(BaggageTest, RemoveTagTest) {
    Baggage baggage(10, "Bob");

    baggage.removeTag();

    EXPECT_EQ(baggage.getOwnerName(), "");
}
