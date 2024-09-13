#pragma once
#include <string>
#include <vector>
#include "ticket.h"
#include <memory>

class User {
private:
    std::vector<std::shared_ptr<Ticket>> userTickets;  // weak_ptr
public:
    std::string username;
    User(const std::string& username) : username(username) {}

    void addTicket(std::shared_ptr<Ticket> ticket);
    std::vector<std::shared_ptr<Ticket>> getTickets() const;
};
