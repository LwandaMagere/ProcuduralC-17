// using the not operator
#include <iostream>
#include <climits>

bool is_int(double);

int main()
{
    using namespace std;

    double num;

    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num)) // continue while num is not int-table
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = static_cast<int> (num); // type cast
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false; 
}