// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class bad : public logic_error
{
public:
    double v1;
    double v2;
    string name;
    explicit bad(double a = 0, double b = 0, const string &n = "hmean", const string &s = "Error in hmean()\n")
        : v1(a), v2(b), name(n), logic_error(s) {}
    void mesg();
    virtual ~bad() throw() {}
};

class bad_hmean : public bad
{
public:
    explicit bad_hmean(double a = 0, double b = 0, const string &n = "hmean", const string &s = "Error in hmean()\n")
        : bad(a, b, n, s) {}
    void mesg() { cout << "hmean(" << v1 << ", " << v2 << "): "
                       << "invalid arguments: a = -b.\n"; }
    virtual ~bad_hmean() throw() {}
};

class bad_gmean : public bad
{
private:
    string name;

public:
    explicit bad_gmean(double a = 0, double b = 0, const string &n = "gmean", const string &s = "Error in gmean()\n")
        : bad(a, b, n, s) {}
    string mesg() { return "gmean() arguments should be >= 0\n"; }
    virtual ~bad_gmean() throw() {}
};
