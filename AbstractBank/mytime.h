// Time class after operator overloading
#ifndef MYTIME
#define MYTIME
#include <iostream>

using std::cout;

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
        void Reset(int h = 0, int m = 0);
        Time operator+(const Time & t) const;
        Time operator-(const Time & t) const;
        friend Time operator*(double mult, const Time & t);
        void Show() const;
};

#endif