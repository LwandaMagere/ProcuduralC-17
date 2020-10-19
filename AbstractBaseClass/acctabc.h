// bank account classes
#ifndef ACCTABC_H_
#define ACCTABC_H_
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

// Abstract Base Class
class AcctABC
{
    private:
        string fullName;
        long acctNum;
        double balance;
    protected:
        struct Formatting
        {
            std::ios_base::fmtflags flag;
            std::streamsize pr;
        };
        const string & FullName() const {return fullName;}
        long AcctNum () const {return acctNum;}
        Formatting SetFormat() const;
        void Restore(Formatting & f) const;
    public:
        AcctABC(const string & s = "Nullbody", long an = -1, double bal = 0.0);
        void Deposit(double amt);
        virtual void Withdraw(double amt) = 0; // pure virtual function
        double Balance () const { return balance;};
        virtual void ViewAcct () const = 0; // pure virtual function
        virtual ~AcctABC(){}
};

// Brass Account Class
class Brass : public AcctABC 
{
    public:
        Brass(const string & s = "Nullbody", long an = -1, double bal = 0.0) : AcctABC(s, an, bal){}
        virtual void Withdraw(double amt);
        virtual void ViewAcct() const;
        virtual ~Brass(){}
};

class BrassPlus : public AcctABC
{
    private:
        double maxLoan;
        double rate;
        double owesBank;
    public:
        BrassPlus(const string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);
        BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
        virtual void ViewAcct()const;
        virtual void Withdraw(double amt);
        void ResetMax(double m) { maxLoan = m; }
        void ResetRate(double r) { rate = r; };
        void ResetOwes() { owesBank = 0; }
};

// BrassPlus Methods
BrassPlus::BrassPlus(const string & s, long an, double bal, double ml, double r) : AcctABC(s, an, bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r) : AcctABC(ba) // uses implicit copy constructor
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "BrassPlus Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%\n";
    Restore(f);
}

void BrassPlus::Withdraw(double amt)
{
    Formatting f = SetFormat();
    double bal = Balance();
    if (amt <= bal)
        AcctABC::Withdraw(amt);
    else if ( amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        AcctABC::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded. Transaction cancelled.\n";
    Restore(f);
}
#endif