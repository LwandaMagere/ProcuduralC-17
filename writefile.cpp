// read stting from a file
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    ifstream fileinput;
    fileinput.open("tobuy.txt");
    if (fileinput.is_open() == false)
    {
        cerr << "Can't open file. Bye." << endl;
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    getline(fileinput, item, ':');
    while (fileinput) // while input is good
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fileinput, item, ':');
    }
    cout << "Done\n";
    fileinput.close();
    return 0;
}