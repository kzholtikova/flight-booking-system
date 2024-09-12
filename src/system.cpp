#include <iostream>
#include "../include/system.h"
#include "../include/inputReader.h"


std::map<std::string, System::command> System::commands = {
        {"check", &System::checkSeat},
        {"book", &System::bookSeat},
        {"return", &System::returnTicket},
        {"view", &System::viewTickets},
};

void System::launch() {
    try {
        InputReader::readConfig("../config.txt", this);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << "\n";
        std::exit(EXIT_FAILURE);
    }

    printCommandsInfo();
    std::cout << "Choose a command (help/ check/ book/ return/ view/ exit): ";
    std::string line;
    while (std::getline(std::cin, line) && line != "exit") {
        try {
            executeCommand(line);
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what();
            std::cin.get();
        }
        std::cout << "Choose a command (help/ check/ book/ return/ view/ exit): ";
    }
}

void System::printCommandsInfo() const {
    std::cout << "help\n"
              << "check [date] [flight No]\n"
              << "book [date] [flight No] [seat No] [username]\n"
              << "return [ticket ID]\n"
              << "view [ticket ID]\n"
              << "view [username]\n"
              << "view [date] [flight No]\n";
}

void System::executeCommand(const std::string& line) {
    std::stringstream ss(line);
    std::string command;
    ss >> command;

    if(command == "help")
        printCommandsInfo();
    else if (commands.count(command) != 0)
        (this->*commands[command])(ss);
    else
        throw std::invalid_argument("No such command.");
}

void System::addAirplane(Airplane &airplane) {
    char flightNumberFirstChar = airplane.getFlightNumber()[0];
    date flightDate = airplane.getFlightDate();

    if (airplanes.count(flightNumberFirstChar) == 0)
        airplanes.insert({flightNumberFirstChar, std::map<date, std::vector<Airplane>>()});
    if (airplanes[flightNumberFirstChar].count(flightDate) == 0)
        airplanes[flightNumberFirstChar].insert({flightDate, std::vector<Airplane>{airplane}});

    airplanes[flightNumberFirstChar][flightDate].push_back(airplane);
}

void System::checkSeat(std::stringstream& ss) {

}

void System::bookSeat(std::stringstream& ss) {

}

void System::returnTicket(std::stringstream& ss) {

}

void System::viewTickets(std::stringstream& ss) {

}
