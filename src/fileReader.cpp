#include <fstream>
#include <sstream>
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
    int numberOfSeats, price;
    while (ss >> numberOfSeats >> price) {
        if (ss.fail())
            throw std::invalid_argument("Invalid seats prices data for " + airplane.getFlightNumber());
        airplane.addSeats(numberOfSeats, price);
    }

    if (ss.fail())
        throw std::invalid_argument("The price for seats is missing for " + airplane.getFlightNumber());
}

void FileReader::validateFlightInfo(std::tm& tm, const std::string& flightDate, const std::string& flightNo, const std::string& seatsPerRow) {
    std::stringstream ss(flightDate);
    ss >> std::get_time(&tm, "%d.%m.%Y");

    if (ss.fail() || ss.eof())
        throw std::invalid_argument("Invalid flight date for " + flightNo);
    if (flightNo.length() < 3 || !isalpha(flightNo[0]) || !isalpha(flightNo[1]) || !std::all_of(flightNo.begin() + 2, flightNo.end(), ::isdigit))
        throw std::invalid_argument("Invalid flight number for " + flightNo);
    if (seatsPerRow.empty() || !std::all_of(seatsPerRow.begin(), seatsPerRow.end(), ::isdigit) || std::stoi(seatsPerRow) <= 0)
        throw std::invalid_argument("Invalid seats per row number for " + flightNo);
}
