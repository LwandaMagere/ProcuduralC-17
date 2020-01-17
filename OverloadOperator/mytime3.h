// Time class with friends
#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        Time operator+(const Time & t) const;
        Time operator-(const Time & t) const;
        Time operator*(double n)const;
        friend Time operator*(double m, const Time & t) {return t * m;}
        friend std::ostream & operator<<(std::ostream & os, const Time & t);

};

#endif