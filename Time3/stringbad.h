// flawed string class definition
#include <iostream>
#ifndef STRINGBAD_H_
#define STRINGBAD_H_

class StringBad
{
    private:
        char * str; // pointer to a string
        int len;
        static int num_strings; // number of objects
    public:
        StringBad(const char * s); // constructor
        StringBad();
        ~StringBad();
        StringBad(const StringBad & st);
        StringBad operator=(const StringBad & st);
        friend std::ostream & operator<<(std::ostream &, const StringBad & st);
};
#endif