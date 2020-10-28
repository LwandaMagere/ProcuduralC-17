// using expanded String class
#include <iostream>
#include "string2.h"
const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    String name;

    cout << "Hi, what's your name?\n>>";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
        << " short sayings <empty line to quit>:\n";
    String sayings[ArSize];  // array of objects
    char temp[MaxLen];  // te,mporary string storage
    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else 
            sayings[i] = temp;
    }
    return 0;
}