// introducing the string class
#include <iostream>
#include <string>
// using string constructors

int main()
{
    using namespace std;
    string one("Lottery Winner!"); // ctor #1
    cout << one << endl; // overloaded <<
    string two(20, '$'); // Create a string object of n elements, each initialized to a character c.
    cout  << two << endl;
    string three(one);
    cout << three << endl;
    one = one + "Oops!";
    cout << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';
    string four;
    four = two + three; // overloaded +, =
    cout  << four << endl;
    char alls[] =  "All's well that ends well";
    string five(alls, 20); // Initializes a string object to the NBTS pointed to by s and continues for n characters, even if it exceeds the size of NBTS
    cout  << five << "!\n";
    string six(alls+6, alls + 10); // Initializes a string object to the values in the range [begin, end) , where begin and end act like pointers and specify locations; the range includes begin and is up to but not including end .
    cout << six << ", ";
    string seven(&five[6], &five[10]);
    cout << seven << "...\n";
    string eight(four, 7, 16);
    cout << eight << " in motion!" << endl;

    return 0;
}