#include "../include/ticket.h"

int Ticket::lastId = 0;

int Ticket::getId() const {
    return id;
}

std::string Ticket::getSeatNo() const {
    return seatNo;
}

Ticket::Ticket(Airplane* airplanePtr, const std::string &seatNumber) {
    airplane = airplanePtr;
    seatNo = seatNumber;
    lastId++;
    id = lastId;
}
