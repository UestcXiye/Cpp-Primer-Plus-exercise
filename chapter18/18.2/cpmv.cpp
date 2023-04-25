#include <iostream>
#include "cpmv.h"
using std::cout;
using std::endl;

Cpmv::Cpmv()
{
    pi = new Info;
    pi->qcode = "";
    pi->zcode = "";
    cout << "Cpmv() called.\n";
}

Cpmv::Cpmv(string q, string z)
{
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
    cout << "Cpmv(string q, string z) called.\n";
}

Cpmv::Cpmv(const Cpmv &cp)
{
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    cout << "Cpmv(const Cpmv &cp) called.\n";
}

Cpmv::Cpmv(Cpmv &&mv)
{
    pi = mv.pi;
    mv.pi = nullptr;
    cout << "Cpmv(Cpmv &&mv) called.\n";
}

Cpmv::~Cpmv()
{
    delete pi;
    cout << "~Cpmv()  called.\n";
}

Cpmv &Cpmv::operator=(const Cpmv &cp)
{
    cout << "Cpmv &operator=(const Cpmv &cp) called.\n";
    if (this == &cp)
        return *this;
    delete pi;
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    return *this;
}

Cpmv &Cpmv::operator=(Cpmv &&mv)
{
    cout << "Cpmv &operator=(Cpmv &&mv) called.\n";
    if (this == &mv)
        return *this;
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv &obj) const
{
    cout << "Cpmv operator+(const Cpmv &obj) const called.\n";
    Cpmv cv;
    cv.pi->qcode = pi->qcode + obj.pi->qcode;
    cv.pi->zcode = pi->zcode + obj.pi->zcode;
    return cv;
}

void Cpmv::Display() const
{
    cout << "The qcode is " << pi->qcode << endl;
    cout << "The zcode is " << pi->zcode << endl;
}
