#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>

class Person
{
private:
    std::string fname; // 名
    std::string lname; // 姓

protected:
    virtual void Data() const;
    virtual void Get();

public:
    Person() : fname("Null"), lname("Null"){};
    Person(std::string fname, std::string lname) : fname(fname), lname(lname){};
    virtual ~Person() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Gunslinger : virtual public Person
{
private:
    double time; // 拔枪时间
    int num;     // 枪上的刻痕数

protected:
    void Data() const;
    void Get();

public:
    Gunslinger() : Person(), time(0.0), num(0){};
    Gunslinger(std::string fn, std::string ln, double ti, int nu) : Person(fn, ln), time(ti), num(nu){};
    Gunslinger(Person &p, double ti, int nu) : Person(p), time(ti), num(nu){};
    double Draw() { return time; }
    void Set();
    void Show() const;
};

class PokerPlayer : virtual public Person
{
private:
    int card; // 扑克牌的值

protected:
    void Data() const;
    void Get();

public:
    PokerPlayer() : Person(), card(1){};
    PokerPlayer(std::string fn, std::string ln, int ca) : Person(fn, ln), card(ca){};
    PokerPlayer(Person &p, int ca) : Person(p), card(ca){};
    int Draw() { return card; }
    void Set();
    void Show() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
protected:
    void Data() const;
    void Get();

public:
    BadDude(){};
    BadDude(std::string fn, std::string ln, double ti = 0.0, int nu = 0, int ca = 1)
        : Person(fn, ln), Gunslinger(fn, ln, ti, nu), PokerPlayer(fn, ln, ca) {}
    BadDude(Person &p, double ti, int nu, int ca)
        : Person(p), Gunslinger(p, ti, nu), PokerPlayer(p, ca) {}
    BadDude(Gunslinger &gs, int ca)
        : Person(gs), Gunslinger(gs), PokerPlayer(gs, ca) {}
    BadDude(PokerPlayer &pp, double ti, int nu)
        : Person(pp), Gunslinger(pp, ti, nu), PokerPlayer(pp) {}
    double Gdraw() { return Gunslinger::Draw(); }
    int Cdraw() { return PokerPlayer::Draw(); }
    void Set();
    void Show() const;
};
#endif // !PERSON_H_
