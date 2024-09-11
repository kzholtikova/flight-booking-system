#pragma once
#include <map>
#include "airplane.h"
#include "user.h"

class System {
private:
    std::map<char, User> users;
    std::map<char, std::map<date, std::vector<Airplane>>> airplanes;
    std::vector<Ticket> tickets;

    Airplane& findAirplane(date userDate, int flightNumber);
    Ticket& findTicket(int ticketId);
public:
    System() = default;
    void addAirplane(Airplane& airplane);

    void checkSeat(date userDate, int flightNumber) const;
    void bookSeat(date userDate, int flightNumber, const std::string& seatNumber, const std::string& username);
    void returnTicket(int ticketId);
    void viewTicket(int ticketId) const;
    void viewUserTickets(const std::string& username) const;
    void viewAirplaneTickets(int flightNumber) const;
};