// defining a Student class using private inheritance
#ifndef STUDE_H_
#define STUDE_H_
#include <iostream>
#include <valarray>
#include <string>

using std::string;
using std::valarray;
using std::istream;
using std::ostream;

class Student: private string, private valarray<double>
{
    private:
        typedef valarray<double> ArrayDb;
        ostream & arr_out(ostream & os) const;
    public:
        Student(): string("Null Student"), ArrayDb(){}
        explicit Student(const string & s): string(s), ArrayDb(){}
        explicit Student(int n): string("Nully"), ArrayDb(n){}
        Student(const string & s, int n): string(s), ArrayDb(n){}
        Student(const string & s, const ArrayDb & a): string(s), ArrayDb(a){}
        Student(const char * str, const double * pd, int n):string(str), ArrayDb(pd,n){}
        ~Student(){}
        double Average() const;
        double & operator[](int i);
        double operator[](int i) const;
        const string & Name() const;
        friend istream & operator>>(istream & is, Student & stu);
        friend istream & getline(istream & is, Student & stu);
        friend ostream & operator<<(ostream & os, const Student & stu);
};
#endif