#include "complex0.h"
#include <iostream>

complex::complex()
{
    real = imaginary = 0.0;
}
complex::complex(const double r, const double i)
{
    real = r;
    imaginary = i;
}
complex::~complex()
{
}
complex complex::operator+(const complex &c) const
{
    complex sum;
    sum.real = real + c.real;
    sum.imaginary = imaginary + c.imaginary;
    return sum;
}
complex complex::operator-(const complex &c) const
{
    complex diff;
    diff.real = real - c.real;
    diff.imaginary = imaginary - c.imaginary;
    return diff;
}
complex complex::operator*(const complex &c) const
{
    complex mult;
    mult.real = real * c.real - imaginary * c.imaginary;
    mult.imaginary = real * c.imaginary + imaginary * c.real;
    return mult;
}
complex complex::operator*(double x) const
{
    complex mult;
    mult.real = real * x;
    mult.imaginary = imaginary * x;
    return mult;
}
complex complex::operator~() const
{
    return complex(real, -imaginary);
}
std::ostream &operator<<(std::ostream &os, const complex &c)
{
    os << "(" << c.real << "," << c.imaginary << "i)";
    return os;
}
std::istream &operator>>(std::istream &is, complex &c)
{
    std::cout << "real: ";
    if (is >> c.real)
    {
        std::cout << "imaginary: ";
        is >> c.imaginary;
    }

    return is;
}