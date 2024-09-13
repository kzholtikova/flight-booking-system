#pragma once
#include <string>
#include <vector>
#include "ticket.h"

class User {
private:
    std::vector<Ticket*> userTickets;  // weak_ptr
public:
    std::string username;
    User(const std::string& username, Ticket* firstTicket) : username(username), userTickets({firstTicket}) {}

    void addTicket(Ticket* ticket);
    std::vector<Ticket*> getTickets() const;
};
