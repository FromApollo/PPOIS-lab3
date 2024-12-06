#ifndef TICKET_H
#define TICKET_H

#include <string>
#include "Passenger.h"

class Ticket {
private:
    std::string ticketNumber;
    std::string seatNumber;
    double price;
public:
    Ticket(const std::string& ticketNumber, const std::string& seatNumber, double price);

    void issueTicket(const Passenger& passenger);

    void refundTicket();

    std::string getTicketNumber() const;

    std::string getSeatNumber() const;

    double getPrice() const;
};

#endif