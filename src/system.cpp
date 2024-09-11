#include "../include/system.h"

void System::addAirplane(Airplane &airplane) {
    char flightNumberFirstChar = airplane.getFlightNumber()[0];
    date flightDate = airplane.getFlightDate();

    if (airplanes.count(flightNumberFirstChar) == 0)
        airplanes.insert({flightNumberFirstChar, std::map<date, std::vector<Airplane>>()});
    if (airplanes[flightNumberFirstChar].count(flightDate) == 0)
        airplanes[flightNumberFirstChar].insert({flightDate, std::vector<Airplane>{airplane}});

    airplanes[flightNumberFirstChar][flightDate].push_back(airplane);
}
