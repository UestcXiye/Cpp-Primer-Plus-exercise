#ifndef WINEP_H
#define WINEP_H

#include <iostream>
#include <string>
#include <valarray>

template <class T1, class T2>
class Pair
{
private:
	T1 a;
	T2 b;

public:
	Pair(const T1 &aval, const T2 &bval) : a(aval), b(bval) {}
	Pair() {}
	void set(const T1 &yr, const T2 &bot);
	int sum() const;
	void Show(int y) const;
};

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private PairArray
{
private:
	int yrs;

public:
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	void GetBottles();
	std::string &Label();
	int sum() const;
	void Show() const;
};

#endif
