#include <iostream>
#include "stock20.h"

// constructors
Stock::Stock()
{
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    using std::endl;
    company = co;

    if ( n < 0)
    {
        std::cout << "Number of shares can't be negative;"
                << company << " shares set to 0." << endl;
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

// class destructor
Stock::~Stock(){}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                << "Transaction is aborted." << endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
         << "Transaction is aborted.";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
            << "Transaction is aborted.";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    using std::endl;
    // set format to #.##
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
        << " Shares: " << shares << endl;
    cout << " Shares Price: $" << share_val;
    cout.precision(2);
    cout << " Total Worth: $" << total_val << endl;

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock & Stock::topval(const Stock & s) const 
{
    if (s.total_val > total_val)
        return s;
    else 
        return *this;
}