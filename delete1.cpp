// using the delete operator
#include <iostream>
#include <cstring> // or string.h
using namespace std;

char * getname(void);

int main()
{
    char * name; // create pointer but no storage

    name = getname(); // assign address of string to name
    cout << name << " at " << (int *) name << "\n";
    delete [] name; // memory freed

    name = getname(); // reuse freed memory
    delete [] name; // memory freed again
    return 0;
}

char * getname(void)
{
    char temp[80]; // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    
    return pn;
}