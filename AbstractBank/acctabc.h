// bank account classes
#ifndef ACC_H_
#define ACC_H_
#include <iostream>
#include <string>

// Abstract Base Class
class AcctABC
{
    private:
        std::string fullName;
        long acctNum;
        double balance;
    protected:
        struct Formatting
        {
            std::ios_base::fmtflags flag;
            std::streamsize pr;
        };
        const std::string & FullName() const {return fullName;}
        long AcctNum() const {return acctNum;}
        Formatting setFormat() const;
        void Restore(Formatting & f) const;
    public:
        AcctABC(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
        void Deposit(double amt);
        virtual void Withdraw(double amt) = 0; // pure virtual function
        double Balance() const {return balance;};
        virtual void ViewAcct() const = 0; // pure virtual function
        virtual ~AcctABC(){}
};
#endif 