#pragma once
#include <string>
#include "system.h"

class FileReader {
public:
    static void readConfig(const std::string& path, System& system);
    static void readSeatsPrices(std::stringstream& ss,Airplane& airplane);
    static void validateFlightInfo(std::tm& tm, const std::string& flightDate, const std::string& flighNo, const std::string& seatsPerRow);
};
