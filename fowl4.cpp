// auto_ptr a poor choice
#include <iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;

    auto_ptr<string> films[5] = 
    {
        auto_ptr<string> (new string("My Very")),
        auto_ptr<string> (new string("Educated Mother")),
        auto_ptr<string> (new string("Just showed us nine planets")),
        auto_ptr<string> (new string("I am great")),
        auto_ptr<string> (new string("Really I am"))
    };
    auto_ptr<string> pwin;
    pwin = films[2]; // films[2] loses ownership
    cout << "The nominees for best avian baseball film are\n";
    for (int i = 0; i < 5; i++)
        cout << *films[i] << endl;
    cout << "The winner is " << *pwin << "!\n";
    cin.get();
    return 0;
}