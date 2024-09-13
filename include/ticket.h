#pragma once
#include "airplane.h"

class Ticket {
private:
    static int lastId;
    int id;
    Airplane* airplane;  // shared_ptr?
    std::string seatNo;
public:
    Ticket(Airplane* airplanePtr, const std::string& seatNumber);
    int getId() const;
    std::string getSeatNo() const;
};
