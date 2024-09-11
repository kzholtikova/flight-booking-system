#include <fstream>
#include <sstream>
#include <regex>
#include "../include/fileReader.h"

void FileReader::readConfig(const std::string& path, System& system) {
    std::ifstream config(path);
    if (!config.is_open())
        throw std::invalid_argument("Invalid path to the config file");

    std::string line;
    while (std::getline(config, line)) {
        std::stringstream ss(line);
        std::string flightDate, flightNo, seatsPerRow;
        ss >> flightDate >> flightNo >> seatsPerRow;
        std::tm tm = {};
        validateFlightInfo(tm, flightDate, flightNo, seatsPerRow);

        Airplane airplane(std::chrono::system_clock::from_time_t(std::mktime(&tm)), flightNo, std::stoi(seatsPerRow));
        readSeatsPrices(ss, airplane);

        system.addAirplane(airplane);
    }
}

void FileReader::readSeatsPrices(std::stringstream &ss, Airplane &airplane) {
    std::string seatsNumbers, price;  // sample strings: 21-40 100$
    while (ss >> seatsNumbers) {
        ss >> price;
        if (ss.fail() || !std::regex_match(seatsNumbers,std::regex("^[0-9]+-[0-9]+$")) || !std::regex_match(price, std::regex("^[0-9]+\\$$")))
            throw std::invalid_argument("Invalid seats prices data for " + airplane.getFlightNumber());
        size_t separatorIdx = seatsNumbers.find("-");
        airplane.addSeats(std::stoi(seatsNumbers.substr(separatorIdx + 1)) - std::stoi(seatsNumbers.substr(0, separatorIdx)), std::stoi(price));
    }
}

void FileReader::validateFlightInfo(std::tm& tm, const std::string& flightDate, const std::string& flightNo, const std::string& seatsPerRow) {
    std::stringstream ss(flightDate);
    ss >> std::get_time(&tm, "%d.%m.%Y");

    if (ss.fail())
        throw std::invalid_argument("Invalid flight date for " + flightNo);
    if (!std::regex_match(flightNo, std::regex("^[A-Z]{2}[0-9]+$")))
        throw std::invalid_argument("Invalid flight number for " + flightNo);
    if (seatsPerRow.empty() || !std::all_of(seatsPerRow.begin(), seatsPerRow.end(), ::isdigit))
        throw std::invalid_argument("Invalid seats per row number for " + flightNo);
}
