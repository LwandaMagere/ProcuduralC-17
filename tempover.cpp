// template overloading
#include <iostream>

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T *(*arr), int n);

struct debts
{
    char name[50];
    double amount;
};
 template<typename T1, typename T2>
 auto gt(T1 x, T2 y)->decltype(x + y)
 {
     ...
     return x + y;
 }
int main()
{
    using namespace std;

    int arr[5] {0,1,2,3,4};
    cout << "*(arr + 1) = " << *(arr + 1) << endl;
    cout << " arr + 1 = " << arr + 1 << endl;
    int * dado  = new int[18];
    int Oduor[18] {0,1,2,3,4,5,6,7,8};
    cout << "This is Automatic " << Oduor << endl;
    cout << "This manual " <<  &Oduor[0] << endl;
    cout << "Check this out " << *(Oduor + 2) << endl;

    
    
    cout <<  sizeof Oduor << endl;
    cout << sizeof dado << endl;

    
    
   /* int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[3];

    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i ++)
        pd[i] = &mr_E[i].amount;
    
    cout << "Listing Mr. E's counts of things:\n";
    // things is an array of int
    ShowArray(things, 6);
    cout << "Listing Mr. E's debts:\n";
// pd is an array of pointers to double
    ShowArray(pd, 3); // uses template B (more specialized)*/
    return 0;
}

template <typename T>
void ShowArray(T arr[]  , int n)
{
    using namespace std;
    cout << "template A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;
}