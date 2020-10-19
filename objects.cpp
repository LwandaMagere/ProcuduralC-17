#include <iostream>

using namespace std;
int main()
{
     int top = 0;
    char  alpha[5] = {'a','b','c','d','e'};
    char item = 'D';

    alpha[++top] = item;

    //for (int i = 0; i <= 0; i++)
        cout << alpha[top] << " 1 " << top << endl;
        cout << alpha[0] << " 0 " << top << endl;
        cout << alpha[2] << " 2 " << top << endl;
        cout << alpha[3] << " 3 " << top << endl;
        cout << alpha[4] << " 4 " << top << endl;

    return 0;
}