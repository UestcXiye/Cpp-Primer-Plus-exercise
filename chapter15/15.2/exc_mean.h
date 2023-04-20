#include <iostream>
#include <stdexcept>
#include <string>

class bad_hmean : public std::logic_error
{
public:
    double v1;
    double v2;
    bad_hmean(double a = 0, double b = 0, const std::string &s = "hmean() argument should not bo negative to each other.\n") : std::logic_error(s), v1(a), v2(b){};
};

class bad_gmean : public std::logic_error
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0, const std::string &s = "gmean() argument should be >= 0.\n") : std::logic_error(s), v1(a), v2(b){};
};
