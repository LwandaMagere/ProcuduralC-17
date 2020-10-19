// using valarray slices
#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE =12;
typedef std::valarray<int> vint;
void show(const vint & v, int cols);
int main()
{
    using std::slice;  // from <valarray>
    using std::cout;
    
    vint valint(SIZE); // think of as 4 rows of 3

    int i;
    return 0;
}

void show(const vint & v, int cols)
{
    using std::cout;
    using std::endl;

    int lim = v.size();
    for (int i = 0; i < lim; ++i)
    {
        cout.width(3);
        cout << v[i];
        if (i % cols == cols - 1)
            cout << endl;
        else 
            cout << ' ';
    }if (lim % cols != 0)
        cout << endl;
}