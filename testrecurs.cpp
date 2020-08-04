#include <iostream>
using namespace std;

void again(int);

int main()
{
    again(5);
    return 0;
}

void again(int n)
{
    cout << n << " My name is Dado Oduor Onyango!" << endl;
    if (n > 0)
        again(n - 1);
    cout << n << " Hii ni kutoka bana!" << endl;
}
