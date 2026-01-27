#include "Market.h"

void Market::addStock(const Stock &stock)
{
    stocks.emplace(stock.getSymbol(), stock);
}

void Market::updateMarket()
{
    for(auto& s:stocks){
        s.second.updatePrice();
    }
}

const std::unordered_map<std::string, Stock> &Market::getStocks() const
{
    return stocks;
}