#include <iostream>
#include  <string>

// using string constructors

int main()
{
    using namespace std;
    string one("Lottery Winner!"); // 1
    cout << one << endl;
    string two(20, '&');  // 2
    cout  << two << endl;
    string three(one);  // 3
    cout << three << endl;
    one += " Oops!";
    cout << one <<endl;
    two = "Sorry! That was ";
    three[0] = 'p';
    string four;
    four = two + three; // overloaded +, =
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls, 20);
    cout << five << "!\n";
    string six( alls+6, alls + 10);
    string seven(&five[6], &five[10]);
    cout << seven << "...\n";
    string eight(four, 7, 16);
    cout << eight << " in motion!" << endl;
    return 0;
}