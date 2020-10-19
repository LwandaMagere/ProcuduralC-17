// introducing the string class
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string one("Lottery Winner!"); // 1
    cout << one << endl;
    string two(20, '$'); // 2
    cout << two << endl;
    string three(one); // 3
    cout << three << endl;
    one += " Opps!";
    cout << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';
    string four;  // 4
    four = two + three;
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls, 20);   // 5
    cout << five << "!\n";
    string six(alls+6, alls + 10); // 6
    cout << six << ", ";
    string seven(&five[6], &five[10]); // 6
    cout << seven << "...\n";
    string eight(four, 7, 16); // 7
    cout << eight << " in motion!" << endl;
    return 0;
}