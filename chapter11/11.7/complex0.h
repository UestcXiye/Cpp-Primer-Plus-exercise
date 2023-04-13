#ifndef COMPLEX0_H
#define COMPLEX0_H
#include <iostream>

class complex
{
private:
    double real;
    double imaginary;

public:
    complex();
    complex(const double r, const double i);
    ~complex();
    complex operator+(const complex &c) const;
    complex operator-(const complex &c) const;
    complex operator*(const complex &c) const;
    complex operator*(double x) const;
    complex operator~() const;
    friend complex operator*(double x, const complex &c) { return c * x; };
    friend std::ostream &operator<<(std::ostream &os, const complex &c);
    friend std::istream &operator>>(std::istream &is, complex &c);
};

#endif