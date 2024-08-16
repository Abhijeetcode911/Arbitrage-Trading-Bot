#include "APIHandler.h"
#include <iostream>

int main() {
    std::cout << "Starting the Arbitrage Trading Bot...\n";

    APIHandler apiHandler;

    // Initialize WebSocket connection for real-time data
    apiHandler.initWebSocket();

    // Simulate a trading operation loop
    while (true) {
        apiHandler.fetchMarketData();
        apiHandler.performTrading();
        // Sleep or wait logic can be added here to control the frequency of operation checks
    }

    return 0;
}
