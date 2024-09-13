#pragma once
#include <string>


class Seat {
private:
    int price;
    std::string seatNo;
    bool available = true;
public:
    explicit Seat(int price, const std::string& seatNo) : price(price), seatNo(seatNo) { }
    bool isAvailable() const;
    int getPrice() const;
    std::string getSeatNumber();
    void book();
};