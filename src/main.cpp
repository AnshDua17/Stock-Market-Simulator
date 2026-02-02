#include <iostream>
#include "Market.h"
#include "Stock.h"

using namespace std;

int main()
{
    cout << "Simulator Started" << endl;

    Market market;

    market.addStock(Stock("AAPL", 100.0));
    market.addStock(Stock("GOOG", 200.0));
    market.addStock(Stock("TSLA", 150.0));

    // market.addStock(apple);

    for (int tick = 1; tick <= 5; tick++)
{
    cout << "\nTick " << tick << endl;

    auto& stocks = market.getStocksMutable();

    stocks.at("AAPL").placeBuy(10 * tick);
    stocks.at("AAPL").placeSell(2);

    stocks.at("GOOG").placeSell(5);

    stocks.at("TSLA").placeBuy(3 * tick);
    stocks.at("TSLA").placeSell(3);

    market.updateMarket();
    
    for (const auto& pair : market.getStocks())
    {
        cout << pair.first << " Price: "
             << pair.second.getPrice() << endl;
    }
}


    return 0;
}
