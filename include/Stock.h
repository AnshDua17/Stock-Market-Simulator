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

    double volatility;
    double trendStrength;

public:
    Stock(const std::string &symbol, double price);

    void placeBuy(int buyVolume);
    void placeSell(int sellVolume);
    
    void updatePrice();

    std::string getSymbol() const;
    double getPrice() const;
};

#endif