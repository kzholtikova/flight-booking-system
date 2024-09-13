#pragma once
#include "airplane.h"

class Ticket {
private:
    int id;
    Airplane* airplane;  // shared_ptr?
    std::string seatNo;
    std::string passenger;
public:
    Ticket(int id, Airplane* airplanePtr, const std::string& seatNumber, const std::string username) :
    id(id), airplane(airplanePtr), seatNo(seatNumber), passenger(username) { };
    std::string toString() const;

    int getId() const;
    Airplane* getAirplane() const;
    std::string getSeatNo() const;
    std::string getPassengerUsername() const;
};
