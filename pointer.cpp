// our first pointer variable
#include <iostream>

int main()
{
    using namespace std;

    int updates = 6; // declare a variable
    int * p_update; // declare pointer to an int

    p_update = &updates; // assign address of int to pointer

    // express valules two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_update << endl;

    // express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_update << endl;

    // use pointer to change value
    *p_update = *p_update + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}