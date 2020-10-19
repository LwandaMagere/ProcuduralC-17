// flawed string definition
#include <iostream>
#ifndef BADSTRING_H_
#define BADSTRING_H_
class StringBad
{
    private:
        char * str; // pointer to string
        int len;   // length of string
        static int num_strings; // number of objects
    public:
        StringBad(const char * s);
        StringBad();
        ~StringBad();
        friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif  