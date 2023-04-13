#ifndef CLASSIC_H_
#define CLASSIC_H_

#include "cd.h"

class Classic : public Cd
{
private:
    char majorWorks[50];

public:
    Classic(char *m, char *s1, char *s2, int n, double x);
    Classic(char *m, const Cd &cd);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    virtual Classic &operator=(const Classic &c);
};

#endif