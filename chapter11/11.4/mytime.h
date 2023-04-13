#ifndef MYTIME_H
#define MYTIME_H
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
    void Reset(int h = 0, int m = 0);

    friend Time operator+(const Time &t1, const Time &t2);
    friend Time operator-(const Time &t1, const Time &t2);
    friend Time operator*(const Time &t, double mult);
    friend Time operator*(double m, const Time &t) { return t * m; }
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};

#endif
