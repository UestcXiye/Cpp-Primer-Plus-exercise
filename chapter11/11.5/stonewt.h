#ifndef STONEWT_H
#define STONEWT_H
#include <iostream>

class Stonewt
{
public:
    enum Format
    {
        STONE,
        INT_POUND,
        DOUBLE_POUND
    };

private:
    enum
    {
        Lbs_per_stn = 14
    };
    Format m_form;
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void SetFormat(Format form);
    Stonewt operator+(const Stonewt &s) const;
    Stonewt operator-(const Stonewt &s) const;
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double m, const Stonewt &s) { return s * m; }
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

#endif