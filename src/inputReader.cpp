#include <fstream>
#include <sstream>
#include <regex>
#include "../include/inputReader.h"

void InputReader::readConfig(const std::string& path, System* system) {
    std::ifstream config(path);
    if (!config.is_open())
        throw std::invalid_argument("Invalid path to the config file.");

    std::string line;
    std::getline(config, line);
    while (std::getline(config, line)) {
        std::stringstream ss(line);
        std::string flightDate, flightNo, seatsPerRow;
        ss >> flightDate >> flightNo >> seatsPerRow;
        std::tm tm = {};
        validateFlightInfo(tm, flightDate, flightNo);
        validatePositiveInt(seatsPerRow);

        Airplane airplane(flightDate, flightNo, std::stoi(seatsPerRow));
        readSeatsPrices(ss, airplane);

        system->addAirplane(airplane, std::chrono::system_clock::from_time_t(std::mktime(&tm)));
    }
}

void InputReader::readSeatsPrices(std::stringstream &ss, Airplane &airplane) {
    std::string seatsNumbers, price;  // sample strings: 21-40 100$
    while (ss >> seatsNumbers) {
        ss >> price;
        if (ss.fail() || !std::regex_match(seatsNumbers,std::regex("^[0-9]+-[0-9]+$")) || !std::regex_match(price, std::regex("^[0-9]+\\$$")))
            throw std::invalid_argument("Invalid seats prices data for " + airplane.getFlightNumber()  + ".");
        size_t separatorIdx = seatsNumbers.find("-");
        airplane.addSeats(std::stoi(seatsNumbers.substr(separatorIdx + 1)) - std::stoi(seatsNumbers.substr(0, separatorIdx)) + 1, std::stoi(price));
    }
}

void InputReader::validateFlightInfo(std::tm& tm, const std::string& flightDate, const std::string& flightNo) {
    std::stringstream ss(flightDate);
    ss >> std::get_time(&tm, "%d.%m.%Y");

    if (ss.fail())
        throw std::invalid_argument("Invalid flight date for " + flightNo  + ".");
    if (!std::regex_match(flightNo, std::regex("^[A-Z]{2}[0-9]+$")))
        throw std::invalid_argument("Invalid flight number for " + flightNo + ".");
}

void InputReader::validatePositiveInt(const std::string num) {
    if (!std::regex_match(num, std::regex("^[0-9]+$")))
        throw std::invalid_argument("Argument '" + num + "' must be positive integer.");
};

void InputReader::validateString(const std::string& str) {
    if (!std::regex_match(str, std::regex("^[a-zA-Z]{4,}$")))
        throw std::invalid_argument("Username '" + str + "' must consist only of letters and be at least of length 4.");
}

void InputReader::validateSeatNo(const std::string& str, const int seatsPerRow) {
    if(!std::regex_match(str, std::regex("^[1-9]+[A-" + std::string(1, 'A' + seatsPerRow) + "]$")))
        throw std::invalid_argument("Seat No" + str + " doesn't exist.");
}

void InputReader::validateEndOfAString(std::stringstream& ss) {
    if (!ss.eof())
        throw std::invalid_argument("Excessive arguments.");
}
