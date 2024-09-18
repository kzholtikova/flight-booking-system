#include "../include/seat.h"

void Seat::book(int ticketIdIn) {
    ticketId = ticketIdIn;
}

bool Seat::isAvailable() const {
    return ticketId == -1;
}

int Seat::getTicketId() const {
    return ticketId;
}

std::string Seat::toString() const {
    return "seat " + seatNo + ", price " + std::to_string(price) + "$";
}

void Seat::unbook() {
    ticketId = -1;
}
