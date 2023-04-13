#include "vector.h"
#include <iostream>
#include <cmath>
using namespace std;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);
    double Vector::set_mag()
    {
        double mag;
        mag = sqrt(x * x + y * y);
        return mag;
    }
    double Vector::set_ang()
    {
        double ang;
        if (x == 0 && y == 0)
            ang = 0.0;
        else
            ang = atan2(y, x);
        return ang;
    }
    void Vector::set_x(double mag, double ang)
    {
        x = mag * cos(ang);
    }
    void Vector::set_y(double mag, double ang)
    {
        y = mag * sin(ang);
    }
    Vector::Vector()
    {
        x = y = 0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode from)
    {
        mode = from;
        if (from == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if (from == POL)
        {
            double mag, ang;
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector()--";
            cout << "vector set to 0" << endl;
            x = y = 0.0;
            mode = RECT;
        }
    }
    void Vector::reset(double n1, double n2, Mode from)
    {
        mode = from;
        if (from == RECT)
        {
            x = n1;
            y = n2;
        }
        else if (from == POL)
        {
            double mag, ang;
            mag = n1;
            ang = n2 / Rad_to_deg;
            set_x(mag, ang);
            set_y(mag, ang);
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector()--";
            cout << "vector set to 0" << endl;
            x = y = 0.0;
            mode = RECT;
        }
    }
    Vector::~Vector()
    {
    }
    double Vector::magval() const
    {
        double mag;
        mag = sqrt(x * x + y * y);
        return mag;
    }

    double Vector::angval() const
    {
        double ang;
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
        return ang;
    }

    void Vector::polar_mode()
    {
        mode = POL;
    }
    void Vector::rect_mode()
    {
        mode = RECT;
    }
    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }
    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }
    Vector operator*(double n, const Vector &a)
    {
        return a * n;
    }
    ostream &operator<<(ostream &os, const Vector &v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)

            os << "(m,a) = (" << v.magval() << ", " << v.angval() << ")";
        else
            os << "Vector object mode is invalid";
        return os;
    }
}