#include "../include/user.h"

void User::addTicket(Ticket *ticket) {
    userTickets.push_back(ticket);
}

std::vector<Ticket*> User::getTickets() const {
    return userTickets;
}


