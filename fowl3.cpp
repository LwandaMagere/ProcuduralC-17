// auto_ptr a poor choice
#include<iostream>
#include <string>
#include <memory>

int main()
{
    using namespace std;
    auto_ptr<string> films[5] = 
    {
        auto_ptr<string> (new string("Goose Balls")),
        auto_ptr<string>  (new string("Fowl Balls")),
        auto_ptr<string> (new string("Duck Walks")),
        auto_ptr<string> (new string("Chicken run")),
        auto_ptr<string> (new string("Dado Balls"))
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