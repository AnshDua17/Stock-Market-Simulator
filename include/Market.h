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

    void placeBuy(const std::string& symbol, int qty);
    void placeSell(const std::string& symbol, int qty);

    const std::unordered_map<std::string, Stock>& getStocks() const;
};

#endif
