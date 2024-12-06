#include "pch.h"

#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Catering.h"
#include "D:\BSUIR\3 semester\PPOIS\lab3\Project1\Project1\Airplane.h"

TEST(CateringTest, ConstructorAndGetters) {

    Airplane airplane("Boeing 737", 180, "Airline A");

    Catering catering("Food Service");

    EXPECT_EQ(catering.getServiceName(), "Food Service");
    EXPECT_TRUE(catering.getMenuItems().empty()); 
}

TEST(CateringTest, AddMenuItemTest) {

    Catering catering("Food Service");

    catering.addMenuItem("Chicken Sandwich");
    catering.addMenuItem("Vegetable Salad");
    catering.addMenuItem("Fruit Juice");

    const auto& menuItems = catering.getMenuItems();
    EXPECT_EQ(menuItems.size(), 3);
    EXPECT_EQ(menuItems[0], "Chicken Sandwich");
    EXPECT_EQ(menuItems[1], "Vegetable Salad");
    EXPECT_EQ(menuItems[2], "Fruit Juice");
}

TEST(CateringTest, ProvideServiceTest) {

    Airplane airplane("Boeing 737", 180, "Airline A");

    Catering catering("Food Service");

    catering.addMenuItem("Chicken Sandwich");
    catering.addMenuItem("Vegetable Salad");

    std::stringstream output;
    std::streambuf* original = std::cout.rdbuf(output.rdbuf()); 

    catering.provideService(airplane);

    EXPECT_NE(output.str().find("Providing catering service for airplane Boeing 737 from airline Airline A."), std::string::npos);
    EXPECT_NE(output.str().find("Menu items available:"), std::string::npos);
    EXPECT_NE(output.str().find("Chicken Sandwich"), std::string::npos);
    EXPECT_NE(output.str().find("Vegetable Salad"), std::string::npos);

    std::cout.rdbuf(original);
}
