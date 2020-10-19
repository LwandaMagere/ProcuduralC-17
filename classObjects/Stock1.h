// Stock class interface
#ifndef STOCK1_H_
#define STOCK1_H_
#include <iostream>
#include <string>

class Stock 
{
    private:
        std::string company;
        long share;
        double share_val;
        double total_val;
        void set_tot(){total_val = shares * share_val; }
    public:
        void acquire(const std::string & co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};
#endif