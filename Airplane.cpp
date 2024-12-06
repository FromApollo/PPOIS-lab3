#include "Airplane.h"
#include <iostream>

Airplane::Airplane(const std::string& model, int seatingCapacity, const std::string& airlineName)
    : model(model), seatingCapacity(seatingCapacity), airlineName(airlineName) {}

void Airplane::performMaintenance() {
    std::cout << "Performing maintenance on airplane model: " << model
        << " of airline: " << airlineName << "\n";
}

std::string Airplane::getModel() const {
    return model;
}

int Airplane::getSeatingCapacity() const {
    return seatingCapacity;
}

std::string Airplane::getAirlineName() const {
    return airlineName;
}
