#include <iostream>
#include "Market.h"

using namespace std;

int main()
{
    Market market;

    market.addStock(Stock("AAPL", 100.0));
    market.addStock(Stock("GOOG", 200.0));
    market.addStock(Stock("TSLA", 150.0));

    cout << "\n--- Initial Market Prices ---\n";
for (const auto& pair : market.getStocks())
{
    cout << pair.first
         << " Price: "
         << pair.second.getPrice()
         << endl;
}

    while (true)
    {
        cout << "\n==== STOCK MARKET SIMULATOR ====\n";
        cout << "1. Buy\n";
        cout << "2. Sell\n";
        cout << "3. Exit\n";
        cout << "Choice: ";

        int choice;
        cin >> choice;

        if (choice == 3)
            break;

        string symbol;
        int qty;

        if (choice == 1)
        {
            cout << "Symbol: ";
            cin >> symbol;
            cout << "Quantity: ";
            cin >> qty;
            market.placeBuy(symbol, qty);
        }
        else if (choice == 2)
        {
            cout << "Symbol: ";
            cin >> symbol;
            cout << "Quantity: ";
            cin >> qty;
            market.placeSell(symbol, qty);
        }
        else
        {
            cout << "Invalid choice.\n";
            continue;
        }

        // Auto market update
        market.updateMarket();

        // Auto display prices
        cout << "\n--- Updated Market Prices ---\n";
        for (const auto& pair : market.getStocks())
        {
            cout << pair.first
                 << " Price: "
                 << pair.second.getPrice()
                 << endl;
        }
    }

    return 0;
}
