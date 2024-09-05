#pragma once
#include "user.h"

class Seat {
private:
    int price;
    User* bookedBy; // may be nullptr
};