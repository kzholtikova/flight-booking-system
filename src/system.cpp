#include <iostream>
#include "../include/system.h"
#include "../include/inputReader.h"


std::map<std::string, System::command> System::commands = {
        {"check", &System::checkSeats},
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
        airplanes[flightNumberFirstChar].insert({flightDate, std::vector<Airplane>{}});

    airplanes[flightNumberFirstChar][flightDate].push_back(airplane);
}

void System::checkSeats(std::stringstream& ss) {
    std::string flightDate, flightNo;
    ss << flightDate << flightNo;
    auto airplane = findAirplane(flightDate, flightNo);
    if (airplane == nullptr)
        throw std::invalid_argument("No such airplane.");

    for (auto seat : airplane->getAvailableSeats())
        std::cout << seat.getSeatNumber() << " " << seat.getPrice() << "% ";
}

void System::bookSeat(std::stringstream& ss) {
    std::string flightDate, flightNo, seatNo, username;
    ss << flightDate << flightNo << seatNo << username;
    InputReader::validateString(username);
    auto airplane = findAirplane(flightDate, flightNo);
    if (airplane == nullptr)
        throw std::invalid_argument("No such airplane.");
    auto seat = airplane->findSeat(seatNo);
    if (seat == nullptr)
        throw std::invalid_argument("No such seat.");

    auto ticket = Ticket(airplane, seatNo);
    tickets.push_back(ticket);
    auto user = findUser(username);
    if (user != nullptr)
        user->addTicket(&ticket);
    else
        users.insert({username[0], std::vector<User>{User(username, &ticket)}});

    seat->book();
}

void System::returnTicket(std::stringstream& ss) {
    std::string id;  // int id?
    ss << id;
    InputReader::validatePositiveInt(id);

}

void System::viewTickets(std::stringstream& ss) {
    std::string argument, argument2;
    ss << argument;
    if (ss << argument2) {
        std::tm tm = {};
        InputReader::validateFlightInfo(tm, argument, argument2);
        return viewAirplaneTickets(std::chrono::system_clock::from_time_t(std::mktime(&tm)), argument2);
    }

    try {  // ??? refactor
        InputReader::validatePositiveInt(argument);
        return viewTicketbById(std::stoi(argument));
    } catch (const std::invalid_argument& e) {
        InputReader::validateString(argument);
        return viewUserTickets(argument);
    }
}

User* System::findUser(const std::string& username) {
    if (users.count(username[0]) != 0) {
        for (auto& user : users[username[0]]) {
            if (user.username == username)
                return &user;
        }
    }
    return nullptr;
}

Airplane* System::findAirplane(const std::string& userDate, const std::string& flightNumber) {
    std::tm tm = {};
    InputReader::validateFlightInfo(tm, userDate, flightNumber);
    for (Airplane& airplane : airplanes[flightNumber[0]][std::chrono::system_clock::from_time_t(std::mktime(&tm))]) {
        if (airplane.getFlightNumber() == flightNumber)
            return &airplane;
    }

    return nullptr;
}
