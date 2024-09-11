#pragma once
#include <string>
#include <vector>
#include "ticket.h"

class User {
private:
    std::string username;
    std::vector<Ticket*> userTickets;  // weak_ptr
public:
    User(const std::string& username, Ticket* firstTicket) : username(username), userTickets({firstTicket}) {}
};
