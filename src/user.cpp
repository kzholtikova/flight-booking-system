#include "../include/user.h"

void User::addTicket(std::shared_ptr<Ticket> ticket) {
    userTickets.push_back(ticket);
}

std::vector<std::shared_ptr<Ticket>> User::getTickets() const {
    return userTickets;
}


