// storing string in an array
#include <iostream>
#include <cstring> // for he strlen() function

int main()
{
    using namespace std;

    const int Size = 15;
    char name1[Size];   // empty array
    char name2[Size] = "C++owboy"; // initialized array

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored" << endl;
    cout << "in an array of " << sizeof(name1) << " bytes." << endl;
    cout << "Your initial is " << name1[0] << endl;
    name2[3] = '\0'; // set to null character
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;

    return 0;
}