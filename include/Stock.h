#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock
{
private:
    std::string symbol;
    double price;

public:
    Stock(const std::string &symbol, double price);

    void updatePrice();

    std::string getSymbol() const;
    double getPrice() const;
};

#endif