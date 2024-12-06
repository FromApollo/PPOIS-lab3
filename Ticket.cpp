#include "Ticket.h"
#include <iostream>

Ticket::Ticket(const std::string& ticketNumber, const std::string& seatNumber, double price)
    : ticketNumber(ticketNumber), seatNumber(seatNumber), price(price) {}

void Ticket::issueTicket(const Passenger& passenger) {
    std::cout << "Ticket issued to: " << passenger.getName() << "\n";
    std::cout << "Ticket Number: " << ticketNumber << "\n";
    std::cout << "Seat Number: " << seatNumber << "\n";
    std::cout << "Price: $" << price << "\n";
}

void Ticket::refundTicket() {
    std::cout << "Ticket with number " << ticketNumber << " has been refunded.\n";
}


std::string Ticket::getTicketNumber() const {
    return ticketNumber;
}

std::string Ticket::getSeatNumber() const {
    return seatNumber;
}

double Ticket::getPrice() const {
    return price;
}
