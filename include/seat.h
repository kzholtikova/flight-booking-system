#pragma once


class Seat {
private:
    int price;
    bool available = true;
public:
    explicit Seat(int price) : price(price) { }
    void book();
};