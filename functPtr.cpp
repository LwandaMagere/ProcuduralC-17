// pointers to function
#include <iostream>
double betsy(int);
double pam(int);

// second argument is a pointer to a type double function that
// takes a tyoe int argument
void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std;
    int code;
    cout << "How many linies of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:" << endl;
    estimate(code, pam);
    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << "hours(s)" << endl;
}