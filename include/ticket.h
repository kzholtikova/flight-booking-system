#pragma once
#include "airplane.h"

class Ticket {
private:
    static int lastID;
    int id;
    Airplane& airplane;  // airplane always refers to the object
    int seatNo;
public:
    Ticket(Airplane& airplane, int seatNumber) : airplane(airplane), seatNo(seatNumber) { }
};
