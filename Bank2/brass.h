// bank account classes
#ifndef BRASS_H_
#define BRASS_H_
#include <iostream>
using std::string;
// Brass Account Class
class Brass 
{
    private:
        string fullName;
        long acctNum;
        double balance;
    public:
        Brass(const string & s =  "Nullbody", long an = -1, double bal = 0.0);
        void Deposit(double amt);
        double Balance() const;
        virtual void Withdraw(double amt);
        virtual void ViewAcct() const;
        virtual ~Brass(){}
};

//Brass Plus Account Class
class BrassPlus : public Brass
{
    private:
        double maxLoan;
        double rate;
        double owesBank;
    public
        BrassPlus(const string & s = "Nullbody", long an = -1, double bal = 0.0, double ml 500, double r = 0.11125);
        virtual void ViewAcct() const;
        virtual void Withdraw(double amt);
        void ResetMax(double m){maxLoan = m;}
        void ResetRate(double r){rate = r;}
        void ResetOwes(){owesBank= 0;}
}
#endif