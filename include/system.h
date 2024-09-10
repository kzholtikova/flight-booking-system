#pragma once
#include <map>
#include "airplane.h"

class System {
private:
    std::map<char, User> users;
    std::map<char, std::map<date, Airplane>> airplanes;
    std::vector<Ticket> tickets;

    Airplane& findAirplane(date userDate, int flightNumber);
    Ticket& findTicket(int ticketId);
public:
    System();

    void checkSeat(date userDate, int flightNumber);
    void bookSeat(date userDate, int flightNumber, const std::string& seatNumber, const std::string& username);
    void returnTicket(int ticketId);
    void viewTicket(int ticketId);
    void viewUserTickets(const std::string& username);
    void viewAirplaneTickets(int flightNumber);
};