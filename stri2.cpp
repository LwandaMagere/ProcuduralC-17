// introducing the string class
#include <iostream>
#include <string>
// using string constructors

int main()
{
    using namespace std;
    string one("Lottery Winner!"); // ctor string(const char * s) #1
    cout << one << endl; // overloaded <<
    string two(20, 's'); // ctor #2 string(size_type n, char c)
    cout << two << endl;
    string three(one); // ctor #3 string(const string & str)
    cout  << three << endl;
    one += " Oops!";
    cout << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';
    string four; // ctor #4 default
    four = two + three; // overloaded +, =
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls,20); // ctor #5 string(const char * s, size_type n)    
    cout << five << "!\n";
    string six(alls+6, alls + 10); // ctor #6 template<class Iter> tring(Iter begin, Iter end) 
    cout << six << ", ";
    string seven(&five[6], &five[10]); // ctor #6 again
    cout << seven << "...\n";
    string eight(four, 7, 16); // ctor #7 string(const string & str, size_type pos, size_type n = npos)
    cout << eight << " in motion!" << endl;
    return 0;


}