// saving to a file
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;

    string filename;

    cout << "Enter name for new file: ";
    cin >> filename;

    ofstream fout(filename.c_str());

    fout << "For your eyes only!" << endl; // write to file
    cout << "Enter your secret number: "; // write to screen
    float secret;
    cin >> secret;
    fout << "Your secret number is " << secret << endl;
    fout.close();

    ifstream fin(filename.c_str());
    cout << "Here are the contents of " << filename << ":\n";
    char ch;
    while (fin.get(ch)) // read character from file and write it to screen
        cout << ch;
    
    cout << "Done\n";
    fin.close();

    return 0;
}