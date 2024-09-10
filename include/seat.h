#pragma once
#include "user.h"

class Seat {
private:
    int price;
    User* bookedBy; // may be nullptr
public:
    Seat(int price) : price(price) { }
};