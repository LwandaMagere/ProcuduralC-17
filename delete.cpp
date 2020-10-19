// using delete operator
#include <iostream>
#include <cstring>
using namespace std;

char * getname(void);
int main()
{
    char * name;

    name = getname(); // assign address of string to name
    cout << name << " at " << (int *) name << endl;
    delete [] name; // memory freed

    name = getname(); // reused free memory
    cout << name << " at " << (int *) name << endl;
    delete [] name; // memory freed again

    return 0;
}

char * getname()
{
    char temp[80]; // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    char * pn =  new char[strlen(temp) + 1];
    strcpy(pn, temp); // copy string in to smaller space

    return pn; // temp lost when function ends
}