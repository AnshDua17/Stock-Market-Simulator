#include "Stock.h"
#include<algorithm>

Stock::Stock(const std::string &symbol, double price)
    : symbol(symbol),
      price(price),
      buyVolume(0),
      sellVolume(0),
      volatility(0.0),
      trendStrength(0.0)
{}

std::string Stock::getSymbol() const
{
    return symbol;
}

double Stock::getPrice() const
{
    return price;
}
void Stock::placeBuy(int quantity)
{
    buyVolume += quantity;
}

void Stock::placeSell(int quantity)
{
    sellVolume += quantity;
}

void Stock::updatePrice()
{
    int netDemand = buyVolume - sellVolume;

    const double sensitivity = 0.02;
    double demandImpact = netDemand * sensitivity;

    double trendImpact = trendStrength * price;

    price += demandImpact + trendImpact;

    price = std::max(price,1.0);

    buyVolume = 0;
    sellVolume = 0;
}