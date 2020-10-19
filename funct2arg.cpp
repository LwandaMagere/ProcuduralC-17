// a function with 2 arguments
#include <iostream>
using namespace std;
void n_chars(char, int);

int main()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q') // q to quit
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << endl << "Enter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << endl;
    cout << "Bye" << endl;
    return 0;
}

void n_chars(char c, int n)
{
    while (n-- > 0) // continue until n reaches 0
        cout << c;
}