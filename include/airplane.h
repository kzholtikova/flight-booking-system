#pragma once
#include <chrono>
#include "seat.h"
using date = std::chrono::time_point<std::chrono::system_clock>;

class Airplane {
private:
    int flightNo;
    date flightDate;
    int seatsPerRow;
    int seatsAvailable;
    std::vector<std::vector<Seat>> seats;
public:
    Airplane(int flightNumber, date flightDate, int seatsPerRow) : flightNo(flightNumber), flightDate(flightDate), seatsPerRow(seatsPerRow) { }

    Seat& findSeat(const std::string& seatNumber);
};
