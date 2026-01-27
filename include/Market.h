#ifndef MARKET_H
#define MARKET_H

#include <unordered_map>
#include <string>
#include "Stock.h"

class Market
{
private:
    std::unordered_map<std::string, Stock> stocks;

public:
    void addStock(const Stock& stock);

    void updateMarket();

    const std::unordered_map<std::string, Stock> &getStocks() const;
};

#endif