#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock
{
private:
    std::string symbol;
    double price;

    int buyVolume;
    int sellVolume;

    double trendStrength;
    double lastPriceChange;

public:
    Stock(const std::string& symbol, double price);

    void placeBuy(int quantity);
    void placeSell(int quantity);

    void updatePrice();

    std::string getSymbol() const;
    double getPrice() const;
};

#endif
