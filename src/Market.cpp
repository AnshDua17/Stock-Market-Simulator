#include "Market.h"

void Market::addStock(const Stock& stock)
{
    stocks.emplace(stock.getSymbol(), stock);
}

void Market::updateMarket()
{
    for (auto& pair : stocks)
    {
        pair.second.updatePrice();
    }
}

void Market::placeBuy(const std::string& symbol, int qty)
{
    stocks.at(symbol).placeBuy(qty);
}

void Market::placeSell(const std::string& symbol, int qty)
{
    stocks.at(symbol).placeSell(qty);
}

const std::unordered_map<std::string, Stock>& Market::getStocks() const
{
    return stocks;
}
