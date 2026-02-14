#include "Stock.h"
#include <algorithm>
#include <cstdlib>

Stock::Stock(const std::string& symbol, double price)
    : symbol(symbol),
      price(price),
      buyVolume(0),
      sellVolume(0),
      trendStrength(0.0),
      lastPriceChange(0.0)
{
}

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
    const double momentumFactor = 0.3;
    const double demandTrendFactor = 0.0005;

    double demandImpact = netDemand * sensitivity;

    // Update trend dynamically
    trendStrength =
        momentumFactor * lastPriceChange
        + demandTrendFactor * netDemand;

    // Simple noise
    double noise = ((rand() % 200) - 100) / 10000.0;

    double trendImpact = trendStrength * price;

    double totalChange = demandImpact + trendImpact + noise;

    price += totalChange;

    price = std::max(price, 1.0);

    lastPriceChange = totalChange;

    // Reset volumes for next tick
    buyVolume = 0;
    sellVolume = 0;
}
