# Stock Market Simulator (C++)

A console-based stock market simulator built in C++ that models price movement using demand-supply imbalance, momentum, and stochastic noise.

---

##  Features

- Multi-stock market (AAPL, GOOG, TSLA by default)
- Demand–Supply driven price updates
- Momentum-based trend feedback
- Random volatility (market noise)
- Interactive CLI trading interface
- Object-Oriented Design
- STL usage (`unordered_map`, `string`, etc.)

---

## Price Update Logic

Each stock updates price per tick using:

Price Change = Demand Impact + Trend Impact + Noise

Where:

- **Demand Impact** → Based on net buy/sell volume
- **Trend Impact** → Based on previous price momentum
- **Noise** → Small random fluctuation

This creates:
- Price acceleration
- Trend continuation
- Reversals
- Volatility behavior

---

##  Project Structure

Stock-Market-Simulator/
│
├── include/
│ ├── Market.h
│ └── Stock.h
│
├── src/
│ ├── main.cpp
│ ├── Market.cpp
│ └── stock.cpp
│
└── README.md


---

## How To Compile & Run

Using g++:

```bash
g++ -std=c++17 src/main.cpp src/Market.cpp src/stock.cpp -Iinclude -o simulator.exe
.\simulator.exe

##  Concepts Demonstrated

Object-Oriented Programming

Encapsulation & Class Design

STL Containers

Simulation Modeling

Market Behavior Approximation

Clean CLI Interaction


##  Future Improvements

Multi-threaded market engine

Portfolio tracking

Profit/Loss calculation

Limit order book implementation

Logging & analytics

GUI interface
