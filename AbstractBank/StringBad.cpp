// StringBad class methods
#include <cstring>
#include "StringBad.h"
using std::cout;

// initializing static class member
int StringBad::num_strings = 0;

// construct StringBad from C string
StringBad::StringBad(const char * s)
{
    len =  std::strlen(s);    // set size
    str = new char[len + 1];   // allot storage
    std::strcpy(str, s); // initialize pointer
    num_strings++;   // set object count
    cout << num_strings << ": \"" << str << "\" object created\n";  // for your Information
}

StringBad::StringBad()
// default constructor
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++"); // default string
    num_strings++;
    cout << num_strings << ": \"" << str
        << "\" default object created\n"; // FYI
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted,";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os;
}