#include <iostream>
#include <fstream>
#include <string>
#include "emp.h"
using std::cin;
using std::cout;
using std::endl;

abstr_emp::~abstr_emp() {}

void abstr_emp::writeall(std::ofstream &ofs)
{
    ofs << fname << "\n"
        << lname << "\n"
        << job << "\n";
}

void abstr_emp::getall(std::ifstream &ifs)
{
    getline(ifs, fname);
    getline(ifs, lname);
    getline(ifs, job);
}

abstr_emp::abstr_emp()
{
    fname = "Null";
    lname = "Null";
    job = "Null";
}

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j)
{
    fname = fn;
    lname = ln;
    job = j;
}

void abstr_emp::ShowAll() const
{
    cout << "Fullname: " << fname << endl;
    cout << "Lastname: " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Enter firstname: ";
    cin >> fname;
    cout << "Enter lastname: ";
    cin >> lname;
    cout << "Ente job: ";
    cin.get();
    getline(cin, job);
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
    cout << e.fname << " " << e.lname << " " << e.job << endl;
    return os; // TODO: 在此处插入 return 语句
}

employee::employee() : abstr_emp()
{
}

employee::employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

void employee::writeall(std::ofstream &ofs)
{
    ofs << Employee << endl;
    abstr_emp::writeall(ofs);
}

void employee::getall(std::ifstream &ifs)
{
    abstr_emp::getall(ifs);
}

void manager::Data() const
{
    cout << "Inchargeof: " << inchargeof << endl;
}

void manager::Get()
{
    cout << "Enter Inchargeof: ";
    cin >> inchargeof;
}

manager::manager() : abstr_emp()
{
    inchargeof = 0;
}

manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico) : abstr_emp(fn, ln, j)
{
    inchargeof = ico;
}

manager::manager(const abstr_emp &e, int ico) : abstr_emp(e), inchargeof(0)
{
}

manager::manager(const manager &m) : abstr_emp(m)
{
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Inchargeof: " << inchargeof << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter inchargeof: ";
    cin >> inchargeof;
}

void manager::writeall(std::ofstream &ofs)
{
    ofs << Manager << endl;
    abstr_emp::writeall(ofs);
    ofs << inchargeof << endl;
}

void manager::getall(std::ifstream &ifs)
{
    abstr_emp::getall(ifs);
    ifs >> inchargeof;
}

void fink::Data() const
{
    cout << "Reportsto: " << reportsto << endl;
}

void fink::Get()
{
    cout << "Enter resportsto: ";
    cin.get();
    getline(cin, reportsto);
}

fink::fink() : abstr_emp()
{
    reportsto = "Null";
}

fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink &e) : abstr_emp(e)
{
    reportsto = e.reportsto;
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Reports to: " << reportsto << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter reports to: ";
    cin.get();
    getline(cin, reportsto);
}

void fink::writeall(std::ofstream &ofs)
{
    ofs << Fink << endl;
    abstr_emp::writeall(ofs);
    ofs << reportsto << endl;
}

void fink::getall(std::ifstream &ifs)
{
    abstr_emp::getall(ifs);
    ifs >> reportsto;
}

highfink::highfink() : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink &f, int ico) : abstr_emp(f), manager(f, ico), fink(f)
{
}

highfink::highfink(const manager &m, const std::string &rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{
}

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h)
{
}

void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    manager::Data();
    fink::Data();
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    manager::Get();
    fink::Get();
}

void highfink::writeall(std::ofstream &ofs)
{
    ofs << Highfink << endl;
    abstr_emp::writeall(ofs);
    manager::writeall(ofs);
    fink::writeReortsto(ofs);
}

void highfink::getall(std::ifstream &ifs)
{
    abstr_emp::getall(ifs);
    manager::readInCharge(ifs);
    fink::readReortsto(ifs);
}
