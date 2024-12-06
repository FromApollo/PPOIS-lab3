#include "Passenger.h"
#include <iostream>

Passenger::Passenger(const std::string& name, const std::string& passportNumber, const std::string& ticketNumber)
    : name(name), passportNumber(passportNumber), ticketNumber(ticketNumber) {}

void Passenger::checkIn() {
    std::cout << name << " has successfully checked in for the flight." << std::endl;
}

void Passenger::cancelTicket() {
    std::cout << name << " has canceled the ticket with number: " << ticketNumber << std::endl;
}


std::string Passenger::getName() const {
    return name;
}

std::string Passenger::getPassportNumber() const {
    return passportNumber;
}

std::string Passenger::getTicketNumber() const {
    return ticketNumber;
}
