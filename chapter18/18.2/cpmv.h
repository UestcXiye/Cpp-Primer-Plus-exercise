#ifndef CPMV_H
#define CPMV_H

#include <string>
using std::string;

class Cpmv
{
public:
    struct Info
    {
        string qcode;
        string zcode;
    };

private:
    Info *pi;

public:
    Cpmv();
    Cpmv(string q, string z);
    Cpmv(const Cpmv &cp);
    Cpmv(Cpmv &&mv);
    ~Cpmv();
    Cpmv &operator=(const Cpmv &cp);
    Cpmv &operator=(Cpmv &&mv);
    Cpmv operator+(const Cpmv &obj) const;
    void Display() const;
};

#endif