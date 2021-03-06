// function with an array range
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};

    int sum = sum_arr(cookies, cookies + 3);
    cout << "Totoal cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, cookies + 3); // fisrt three elements
    cout << "First three eaters ate " << sum << " cookies." << endl;
    
    sum = sum_arr(cookies + 4, cookies + 8); // last 4 elements
    cout << "Last four eaters ate " << sum << " cookies." << endl;
    return 0;
}

// return the sum of an integer array
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
        total += *pt;
    return total;

}