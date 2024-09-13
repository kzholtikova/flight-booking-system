#include "../include/ticket.h"


int Ticket::getId() const {
    return id;
}

std::string Ticket::getSeatNo() const {
    return seatNo;
}

Airplane* Ticket::getAirplane() const {
    return airplane;
}

std::string Ticket::toString() const {
    return airplane->toString() + airplane->findSeat(seatNo)->toString();
}

std::string Ticket::getPassengerUsername() const {
    return passenger;
}
