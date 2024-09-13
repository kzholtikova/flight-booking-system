#include "../include/airplane.h"
#include "../include/inputReader.h"

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

int Airplane::getSeatsPerRow() const {
    return seatsPerRow;
}

Seat* Airplane::findSeat(const std::string& seatNumber) {
    InputReader::validateSeatNo(seatNumber, seatsPerRow);
    int seatRow = (std::stoi(seatNumber.substr(0, seatNumber.size() - 1)) - 1);
    int seatColumn = seatNumber.back() - 'A', seatIndex = seatRow * seatsPerRow + seatColumn;
    return seatIndex < seats.size() ? &seats[seatIndex] : nullptr;
}
