// Time class before operator overloading

/*The Time class provides methods for adjusting and resetting times, for displaying time
values, and for adding two times.*/
#ifndef MYTIME_H_
#define MYTIME_H_

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
        Time Sum(const Time & t) const;
        void Show() const;
};
#endif