#include "../include/ticket.h"


int Ticket::lastId = 0;

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
    return airplane->toString() + ", " + airplane->findSeat(seatNo)->toString();
}

std::string Ticket::getPassengerUsername() const {
    return passenger;
}

Ticket::Ticket(Airplane *airplanePtr, const std::string &seatNumber, const std::string username) {
    airplane = airplanePtr;
    seatNo = seatNumber;
    passenger = username;
    lastId++;
    id = lastId;
}
