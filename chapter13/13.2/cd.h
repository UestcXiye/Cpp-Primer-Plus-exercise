#ifndef CD_H_
#define CD_H_

class Cd
{ // represents a CD disk
private:
    char *performers;
    char *label;
    int selections;  // number of selections
    double playtime; // playing time in minute

public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const; // reports all CD data
    virtual Cd &operator=(const Cd &d);
};

#endif