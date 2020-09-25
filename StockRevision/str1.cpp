// introducing the string class
#include <iostream>
#include <string>
// using string constructors

int main()
{
    using namespace std;

    string one("Lottery Winner!"); // string(const char * s)
    cout << one << endl;

    string two(20, '$'); // string(size_type n, char c) 
    cout << two << endl;

    string three(one); // string(const string & str)  
    one += "Oops!";
    cout << one << endl;
    two = "Sorry! That was ";
    three[0]= 'P';
    string four;   
    four = two + three;
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls,20); // string(const char * s, size_type n)
    cout << five << "!\n";
    string six(alls+6, alls+10);
    cout << six << ", ";
    string seven(&five[6], &five[10]);
    string seven << "...\n";
    string eight(four, 7, 16); // string(const string & str, size_type pos, size_type n = npos)
    cout << eight << " in motion!" << endl;
    
    return 0;
}