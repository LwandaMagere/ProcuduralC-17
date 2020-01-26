// flawed string class definition
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_
class StringBad
{
    private:
        char * str; // pointer to string
        int len; // length of string
        static int num_strings; // number of objects
    public:
        StringBad(const char * s); 
        StringBad();
        ~StringBad();
        friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif