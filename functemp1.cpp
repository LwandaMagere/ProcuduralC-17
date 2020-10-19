// using a function template
#include <iostream>
// function template prototype
template<typename T>
void Swap(T &a, T &b);

int main()
{
    using namespace std;

    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i,j); // generates void Swa(int &, int &)
    cout << "Now i, j = " << i << ", " << j << ".\n";

    
    return 0;
}

template<typename T>
void Swap(T &a, T &b)
{
    T temp; // temp a variable of type T
    temp = a;
    a = b;
    b = temp;
}