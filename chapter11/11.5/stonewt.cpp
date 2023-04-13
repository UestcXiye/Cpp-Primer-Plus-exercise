#include "stonewt.h"
#include <iostream>

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    m_form = STONE;
}
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    m_form = INT_POUND;
}
Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
    m_form = DOUBLE_POUND;
}
Stonewt::~Stonewt()
{
}
void Stonewt::SetFormat(Format from)
{
    m_form = from;
}
Stonewt Stonewt::operator+(const Stonewt &s) const
{
    Stonewt sum;
    sum.pounds = pounds + s.pounds;
    sum.stone = int(sum.pounds) / Lbs_per_stn;
    sum.pds_left = int(sum.pounds) % Lbs_per_stn + sum.pounds - int(sum.pounds);
    return sum;
}
Stonewt Stonewt::operator-(const Stonewt &s) const
{
    Stonewt diff;
    diff.pounds = pounds - s.pounds;
    diff.stone = int(diff.pounds) / Lbs_per_stn;
    diff.pds_left = int(diff.pounds) % Lbs_per_stn + diff.pounds - int(diff.pounds);
    return diff;
}
Stonewt Stonewt::operator*(double n) const
{
    double mult;
    mult = pounds * n;
    return Stonewt(mult);
}
std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    if (s.m_form == Stonewt::STONE)
    {
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    }
    else if (s.m_form == Stonewt::INT_POUND)
    {
        os << int(s.pounds) << " pounds\n";
    }
    else if (s.m_form == Stonewt::DOUBLE_POUND)
    {
        os << s.pounds << " pounds\n";
    }
    else
        os << "Stonewt state is invalid";
    return os;
}