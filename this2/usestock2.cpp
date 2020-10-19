// using the Stock class
#include <iostream>
#include "stock2.h"

const int STKS = 4;
int main()
{
    // create an array of initialized objects
    Stock stock[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Fleep Enterprises", 60, 6.5)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        stocks[st].show();
    // set pointer to first element
    const Stock * top = &stock[0];
    for (st = 1; st < STKS; st++)
        top = &top->topval(stock[st]);

    // now top points to the most valuable holding
    std::cout << "\nMost valuable holding:\n";
    top->show();
    return 0;
}