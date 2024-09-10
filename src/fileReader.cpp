#include <iostream>
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
