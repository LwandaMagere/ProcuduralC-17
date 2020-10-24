// Time class before operator overloading
#ifndef MYTIME1
#define MYTIME1

class Time
{
private:
    int hours;
    int mminutes;
public:
    Time();
    Time(int h, int m = 0);
    void Addmin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time & t) const;
    void Show() const;
};

#endif