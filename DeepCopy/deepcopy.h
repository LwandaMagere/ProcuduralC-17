// fixed and augmented string class definition

#ifndef Deep_h
#define Deep_h

#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:
        char * str; // pointer to string
        int len; // length of string
        static int num_strings; // number of objects
        static const int CINLIM = 80; // cin inout limit
    public:
        String(const char * s); // constructor
        String();
        String(const String &); // copy constructor
        ~String(); 
        int length()const {return len; }
        // Overloaded operators
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
        // overloaded operator friends
        friend bool operator<(const String & st, const String &st2);
        friend bool operator>(const String & st1, const String & st2);
        friend bool operator==(const String &st, const String &st2);
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & is, String & st);
        //Static function
        static int HowMany();

};
#endif