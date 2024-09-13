#include "../include/airplane.h"
#include "../include/inputReader.h"

std::string Airplane::getFlightNumber() const {
    return flightNo;
}

std::string Airplane::getFlightDate() const {
    return flightDate;
}

void Airplane::addSeats(int numberOfSeats, int price) {
    for (int i = totalSeats + 1 ; i <= totalSeats + numberOfSeats; i++)
        seats.push_back(Seat(price, std::to_string(i / seatsPerRow + 1) + char(('A' + i % seatsPerRow))));
    totalSeats += numberOfSeats;
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

std::vector<Seat> Airplane::getSeatsByCondition(bool available) const {
    std::vector<Seat> filteredSeats;
    for (auto seat : seats) {
        if ((available && seat.isAvailable()) || (!available && !seat.isAvailable()))
            filteredSeats.push_back(seat);
    }
    return filteredSeats;
}

std::string Airplane::toString() const {
    return "Flight " + flightNo + ", " + flightDate;
}
