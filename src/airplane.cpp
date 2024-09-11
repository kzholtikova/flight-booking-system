#include "../include/airplane.h"

std::string Airplane::getFlightNumber() const {
    return flightNo;
}

date Airplane::getFlightDate() const {
    return flightDate;
}

void Airplane::addSeats(int numberOfSeats, int price) {
    for (int i = 0; i < numberOfSeats; i++)
        seats.push_back(Seat(price));
}
