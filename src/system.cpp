#include <iostream>
#include "../include/system.h"
#include "../include/inputReader.h"
#include <regex>


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
            std::cerr << "Error: " << e.what() << " Press Enter to continue...";
            std::cin.get();
        }
        std::cout << "Choose a command (help/ check/ book/ return/ view/ exit): ";
    }
}

void System::printCommandsInfo() {
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

    if(command == "help" && ss.eof())
        printCommandsInfo();
    else if (commands.count(command) != 0)
        (this->*commands[command])(ss);
    else
        throw std::invalid_argument("No command named " + command + ".");
}


// ADDING NEW INFO
void System::addAirplane(Airplane &airplane, date tm) {
    char flightNumberFirstChar = airplane.getFlightNumber()[0];

    if (airplanes.count(flightNumberFirstChar) == 0)
        airplanes.insert({flightNumberFirstChar, std::map<date, std::vector<Airplane>>()});
    if (airplanes[flightNumberFirstChar].count(tm) == 0)
        airplanes[flightNumberFirstChar].insert({tm, std::vector<Airplane>{}});

    airplanes[flightNumberFirstChar][tm].push_back(airplane);
}

void System::addUser(User& user) {
    if (users.count(user.username[0]) != 0)
        users[user.username[0]].push_back(user);
    else
        users.insert({user.username[0], std::vector<User>{user}});
}


// SEARCH
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

int System::findTicketIndex(int id) {
    int low = 0, high = tickets.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (tickets[mid]->getId() == id)
            return mid;
        if (tickets[mid]->getId() < id)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}


// COMMANDS
void System::checkSeats(std::stringstream& ss) {
    std::string flightDate, flightNo;
    ss >> flightDate >> flightNo;
    InputReader::validateEndOfAString(ss);
    auto airplane = findAirplane(flightDate, flightNo);
    if (airplane == nullptr)
        throw std::invalid_argument("No flight with number " + flightNo + " on " + flightDate  + ".");

    for (const auto& seat : airplane->getSeatsByCondition(true))
        std::cout << seat.toString() + "\n";
}

void System::bookSeat(std::stringstream& ss) {
    std::string flightDate, flightNo, seatNo, username;
    ss >> flightDate >> flightNo >> seatNo >> username;
    InputReader::validateString(username);
    InputReader::validateEndOfAString(ss);
    auto airplane = findAirplane(flightDate, flightNo);
    if (airplane == nullptr)
        throw std::invalid_argument("No flight with number " + flightNo + " on " + flightDate  + ".");
    auto seat = airplane->findSeat(seatNo);
    if (seat == nullptr || !seat->isAvailable())
        throw std::invalid_argument("Seat No" + seatNo + "  is already booked!");

    auto ticket = std::make_shared<Ticket>(airplane, seatNo, username);
    tickets.push_back(ticket);
    auto user = findUser(username);
    if (user == nullptr) {
        User newUser(username);
        addUser(newUser);
        user = findUser(username);
    }
    user->addTicket(ticket);

    seat->book(ticket->getId());
    std::cout << "Your ticket ID is " << ticket->getId() << ".\n";
}

void System::returnTicket(std::stringstream& ss) {
    std::string id;
    ss >> id;
    InputReader::validateEndOfAString(ss);
    InputReader::validatePositiveInt(id);
    int ticketIndex = findTicketIndex(std::stoi(id));
    tickets[ticketIndex]->getAirplane()->findSeat(tickets[ticketIndex]->getSeatNo())->unbook();
    tickets.erase(tickets.begin() + ticketIndex);
    std::cout << "Ticket with ID " << id << " has been returned.\n";
}

void System::viewTickets(std::stringstream& ss) {
    std::string argument, argument2;
    ss >> argument;
    if (ss >> argument2) {
        InputReader::validateEndOfAString(ss);
        return viewAirplaneTickets(argument, argument2);
    }

    if (std::regex_match(argument, std::regex("^[0-9]+$")))
        viewTicketById(std::stoi(argument));
    else
        viewUserTickets(argument);
}

void System::viewTicketById(int id) {
    int ticketIndex = findTicketIndex(id);
    if (ticketIndex == -1)
        throw std::invalid_argument("No ticket with ID " + std::to_string(id)  + ".");
    std::cout << tickets[ticketIndex]->toString() << " – " << tickets[ticketIndex]->getPassengerUsername() << "\n";
}

void System::viewUserTickets(const std::string &username) {
    InputReader::validateString(username);
    auto user = findUser(username);
    if (user == nullptr)
        throw std::invalid_argument("No user with username " + username  + ".");
    for (const auto& weakTicket : user->getTickets())
        if (auto ticket = weakTicket.lock())
            std::cout << ticket->toString() << "\n";
}

void System::viewAirplaneTickets(const std::string& flightDate, const std::string &flightNo) {
    auto airplane = findAirplane(flightDate, flightNo);
    if (airplane == nullptr)
        throw std::invalid_argument("No flight with number " + flightNo + " on " + flightDate  + ".");
    for (const auto& seat : airplane->getSeatsByCondition(false))
        std::cout << seat.toString() << ", " <<
        tickets[findTicketIndex(seat.getTicketId())]->getPassengerUsername() << "\n";
}
