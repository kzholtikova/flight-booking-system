#include "../include/seat.h"

void Seat::book() {
    available = false
}

bool Seat::isAvailable() const {
    return available;
}

int Seat::getPrice() const {
    return price;
}

std::string Seat::getSeatNumber() {
    return seatNo;
}
