// defining a Student class using private inheritance
#ifndef Stu_H_
#define Stu_H_

#include <iostream>
#include <valarray>
#include <string>
class Student : private std::string, private std::valarray<double>
{
    private:
        typedef std::valarray<double> ArrayDb;
        std::ostream & arr_out(std::ostream & os) const;
    public:
        Student() : std::string("NUll Student"), ArrayDb(){}
        explicit Student(const std::string & s): std::string(s), ArrayDb(){}
        explicit Student(int n) : std::string("Nully"), ArrayDb(n){}
        Student(const std::string & s, int n) : std::string(s), ArrayDb(){}
        Student(const char * str, const double * pd, int n) : std::string(str), ArrayDb(pd, n){}
        ~Student(){}
        double Average () const;
        double & operator[](int i);
        double operator[](int) const;
        const std::string & Name() const;
        //friends
        // input
        friend std::istream & operator>>(std::istream & is, Student & stu);
        friend std::istream & getline(std::istream & is, Student & stu);
        // output
        friend std::ostream & operator<<(std::ostream & is, const Student & stu);


};
#endif