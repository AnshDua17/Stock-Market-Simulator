cmake_minimum_required(VERSION 3.15)

project(StockMarketSimulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(simulator
    src/main.cpp
    src/Stock.cpp
    src/Market.cpp
)
