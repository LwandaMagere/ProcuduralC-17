// using recursion to subdivide a ruler
#include <iostream>
const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);

int main()
{
    char ruler[Len];
    int i;
    for (i = 1; i < Len - 2; i++)
        ruler[i] = ' ';
    ruler[Len - 1]= '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for (i = 1; i <= Divs; i++)
    {
        subdivide(ruler,min,max, i);
        std::cout << ruler << std::endl;
        for (int j = 1; j < Len - 2; j++)
              ruler[j] = ' '; // reset to blank ruler
    }
    return 0;
}

void subdivide(char ar[],  int low, int high, int level)
{
    if (level == 0)
        return;
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level -1);
    subdivide(ar, mid, high, level -1);
}

/*The subdivide() function in Listing 7.17 uses the variable level to control the recur-
sion level.When the function calls itself, it reduces level by one, and the function with a
level of 0 terminates. Note that subdivide() calls itself twice, once for the left subdivi-
sion and once for the right subdivision.The original midpoint becomes the right end for
one call and the left end for the other call. Notice that the number of calls grows geomet-
rically.That is, one call generates two, which generate four calls, which generate eight, and
so on.That’s why the level 6 call is able to fill in 64 elements (2 6 = 64).This continued
doubling of the number of function calls (and hence of the number of variables stored)
make this form of recursion a poor choice if many levels of recursion are required. But it
is an elegant and simple choice if the necessary levels of recursion are few.*/