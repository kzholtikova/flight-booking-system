#pragma once
#include "airplane.h"

class Ticket {
private:
    static int lastId;
    int id;
    Airplane* airplane;
    std::string seatNo;
    std::string passenger;
public:
    Ticket(Airplane* airplanePtr, const std::string& seatNumber, const std::string username);
    std::string toString() const;

    int getId() const;
    Airplane* getAirplane() const;
    std::string getSeatNo() const;
    std::string getPassengerUsername() const;
};
