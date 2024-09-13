#pragma once
#include <chrono>
#include <map>
#include "seat.h"
using date = std::chrono::time_point<std::chrono::system_clock>;

class Airplane {
private:
    std::string flightNo;
    date flightDate;
    int seatsPerRow;
    int seatsAvailable;
    std::vector<Seat> seats;
public:
    Airplane(date flightDate, const std::string& flightNumber, int seatsPerRow) : flightDate(flightDate), flightNo(flightNumber), seatsPerRow(seatsPerRow) { }

    void addSeats(int numberOfSeats, int price);
    Seat& findSeat(const std::string& seatNumber);
    std::string getFlightNumber() const;
    date getFlightDate() const;
    int getSeatsPerRow() const;
};
