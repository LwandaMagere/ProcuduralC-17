// fixed and augmented string class definition

#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

class String 
{
    private:
        char * str; // pointer to string
        int len; // length of string
        static int num_strings; // number of objects
        static const int CINLIM = 80; // cin input limit
    public:
        String(const char * str); 
        String();
        String(const String &); // copy constructor
        ~String();
        int length () const {return len;}
        String & operator=(const String &);
        String & operator=(const char *);
        char & operator[](int i);
        const char & operator[](int i) const;
        friend bool operator<(const String &st, const String &st2);
        friend bool operator>(const String &st1, const String &st2);
        friend bool operator==(const String &st, const String &st2);
        friend ostream & operator<<(ostream & os, const String &st);
        friend istream & operator>>(istream & is, String & st);
        // static function
        static int HowMany();

};
#endif