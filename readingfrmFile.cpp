// read string from a file
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    ifstream fin;
    fin.open("tobuy.txt");

    if (fin.is_open() == false)
    {
        cerr << "Can't open file. Bye." << endl;
        exit(EXIT_FAILURE);
    }

    string item;
    int count = 0;
    getline(fin, item, ':');
    while (fin) // while input is good
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done" << endl;
    fin.close();
    return 0;
}