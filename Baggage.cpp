#include "Baggage.h"
#include <iostream>

Baggage::Baggage(int weight, const std::string& ownerName)
    : weight(weight), ownerName(ownerName) {}

void Baggage::tagBaggage(const Passenger& passenger) {
    ownerName = passenger.getName();
    std::cout << "Baggage tagged with owner: " << ownerName << "\n";
}

void Baggage::removeTag() {
    ownerName = "";
    std::cout << "Baggage tag removed.\n";
}


int Baggage::getWeight() const {
    return weight;
}

std::string Baggage::getOwnerName() const {
    return ownerName;
}
