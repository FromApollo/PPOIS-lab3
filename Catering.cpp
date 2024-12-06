#include "Catering.h"
#include <iostream>

Catering::Catering(const std::string& serviceName)
    : serviceName(serviceName) {}

void Catering::addMenuItem(const std::string& menuItem) {
    menuItems.push_back(menuItem);
}

void Catering::provideService(const Airplane& airplane) {
    std::cout << "Providing catering service for airplane " << airplane.getModel()
        << " from airline " << airplane.getAirlineName() << ".\n";

    std::cout << "Menu items available:\n";
    for (const auto& item : menuItems) {
        std::cout << "- " << item << "\n";
    }
}

std::string Catering::getServiceName() const {
    return serviceName;
}

const std::vector<std::string>& Catering::getMenuItems() const {
    return menuItems;
}
