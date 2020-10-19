// StringBad class methods
#include <cstring>
#include "stringbad.h"
using std::cout;

// initializing static class member
int StringBad::num_strings = 0;

StringBad::StringBad(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s); // initialize a pointer
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" object created\n"; // For Your Information
}

StringBad::StringBad()
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");
    cout << num_strings << ": \"" << str
    << "\" default object created\n"; // FYI
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted, "; // FYI
    --num_strings;
    cout << num_strings << " left\n" ;
    delete [] str;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}

StringBad::StringBad(const StringBad & s)
{
     len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s); // initialize a pointer
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" object created\n"; // For Your Information
}

