#pragma once
#include <map>
#include "airplane.h"

class System {
private:
    std::map<char, User> users;
    std::map<char, std::map<date, Airplane>> airplanes;
    std::vector<Ticket> tickets;
};