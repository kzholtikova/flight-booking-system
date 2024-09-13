#pragma once
#include <map>
#include <sstream>
#include "airplane.h"
#include "user.h"


class System {
private:
    std::map<char, User> users;
    std::map<char, std::map<date, std::vector<Airplane>>> airplanes;
    std::vector<Ticket> tickets;

    Airplane& findAirplane(date userDate, int flightNumber);
    Ticket& findTicket(int ticketId);

    void viewTicketbById(int id) const;
    void viewUserTickets(const std::string& username) const;
    void viewAirplaneTickets(date flightDate, const std::string& flightNo) const;

    void executeCommand(const std::string& command);
public:
    using command = void (System::*)(std::stringstream&);
    static std::map<std::string, command> commands;

    System() = default;
    void launch();

    void addAirplane(Airplane& airplane);

    void printCommandsInfo() const;
    void checkSeat(std::stringstream& ss);
    void bookSeat(std::stringstream& ss);
    void returnTicket(std::stringstream& ss);
    void viewTickets(std::stringstream& ss);
};