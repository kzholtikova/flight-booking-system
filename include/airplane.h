#pragma once
#include <chrono>
#include <map>
#include "seat.h"

class Airplane {
private:
    std::string flightNo;
    std::string flightDate;
    int seatsPerRow;
    int totalSeats = 0;
    std::vector<Seat> seats;
public:
    Airplane(const std::string& flightDate, const std::string& flightNumber, int seatsPerRow) : flightDate(flightDate), flightNo(flightNumber), seatsPerRow(seatsPerRow) { }
    std::string toString() const;

    void addSeats(int numberOfSeats, int price);
    Seat* findSeat(const std::string& seatNumber);
    std::string getFlightNumber() const;
    std::string getFlightDate() const;
    int getSeatsPerRow() const;
    std::vector<Seat> getSeatsByCondition(bool available) const;

};
