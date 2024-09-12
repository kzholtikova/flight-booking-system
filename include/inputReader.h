#pragma once
#include <string>
#include "system.h"

class InputReader {
public:
    static void readConfig(const std::string& path, System* system);
    static void readSeatsPrices(std::stringstream& ss,Airplane& airplane);

    static void validateFlightInfo(std::tm& tm, const std::string& flightDate, const std::string& flighNo);
    static void validatePositiveInt(const std::string num);
    static void validateString(const std::string& str);
};
