#pragma once
#include "airplane.h"

class Ticket {
private:
    int id;
    Airplane& airplane;  // airplane always refers to the object
    int seatNo;
};
