#pragma once
#include <string>


class Seat {
private:
    int price;
    std::string seatNo;
    int ticketId = -1;
public:
    explicit Seat(int price, const std::string& seatNo) : price(price), seatNo(seatNo) { }
    std::string toString() const;

    bool isAvailable() const;
    int getTicketId() const;

    void book(int ticketIdIn);
    void unbook();
};