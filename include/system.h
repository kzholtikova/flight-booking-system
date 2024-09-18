#pragma once
#include <map>
#include <sstream>
#include "airplane.h"
#include "user.h"

using date = std::chrono::time_point<std::chrono::system_clock>;

class System {
private:
    std::map<char, std::vector<User>> users;
    std::map<char, std::map<date, std::vector<Airplane>>> airplanes;
    std::vector<std::shared_ptr<Ticket>> tickets;

    User* findUser(const std::string& username);
    Airplane* findAirplane(const std::string& userDate, const std::string& flightNumber);
    int findTicketIndex(int id);

    void viewTicketById(int id);
    void viewUserTickets(const std::string& username);
    void viewAirplaneTickets(const std::string& flightDate, const std::string& flightNo);

    void executeCommand(const std::string& command);
public:
    using command = void (System::*)(std::stringstream&);
    static std::map<std::string, command> commands;

    System() = default;
    void launch();

    void addUser(User& user);
    void addAirplane(Airplane& airplane, date tm);

    static void printCommandsInfo() ;
    void checkSeats(std::stringstream& ss);
    void bookSeat(std::stringstream& ss);
    void returnTicket(std::stringstream& ss);
    void viewTickets(std::stringstream& ss);
};