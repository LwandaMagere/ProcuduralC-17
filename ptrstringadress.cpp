// using pointers to strings
#include <iostream>
#include <cstring> // strlen() and strcpy()

int main()
{
    using namespace std;

    short animal[20]; // animal holds bear

    cout << animal << endl;
    cout << &animal[1] << endl;
    cout << &animal << endl;

   /* const char * bird = "wren"; // bird holds address of string


    cout << animal << " and "; // display bear
    cout << bird << endl; // display wren
    
    cout << "Enter a kind of animal: ";
    cin >> animal;  // okay if input < 20 char
    cout << "Before using strcpy():" << endl;
    cout << animal << " at " << (int *) animal << endl;*/
    
    return 0;
}