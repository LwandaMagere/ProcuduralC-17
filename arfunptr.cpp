// an array of function pointers
#include <iostream>

const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

typedef  const double * (*p_fun)(const double *, int n);

int main()
{
    using namespace std;
    
    double av[3] = {1112.3, 1542.6, 2227.9};

    // pointer to function
    p_fun p1 = f1;
    auto p2 = f2;
    // const double *(*p2)(const double *, int) = f2
    cout << "Using pointers to functions:\n";
    cout << " Address            Value\n";
    cout << (*p1)(av,3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av,3) << ": " << *p2(av,3) << endl;

    p_fun pa[3] = {f1,f2,f3};
    p_fun (*pb)[3] = &pa;
    // const double *(**pb)(const double *, int) = pa;
    cout << " Address       Value\n";
    for (int i = 0; i < 3; i++)
    {
        cout << pa[i](av, 3) << ": " << *pa[i](av,3) << endl;
    }
    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << " Address       Value\n";
    for (int i = 0; i < 3; i++)
        cout << (*pb)[i](av,3) << ": " << *(*pb)[i](av,3) << endl;
    cout << "\nUsing pointers to an array of pointers:\n";
    cout << " Address       Value\n";
    // easy way to declare
    auto pc = &pa;
    //const double * (*(*pc)[3])(const double, int) = &pa;
    cout << (*pc)[0](av,0) << ": " << *(*pc)[0](av,0) << endl;
    const double * (*(*pd)[3])(const double *, int ) = &pa;
    // store return value in pdb
    const double * pdb = (*pd)[1](av,3);
    cout << pdb << ": " << *pdb << endl;
    // alternative notation
    cout << (*(*pd)[2])(av,56) << ": " << *(*(*pd)[2])(av,56) << endl;

    return 0;
}

const double * f1(const double * ar, int n)
{
    return ar;
}

const double * f2(const double ar[], int n)
{
    return ar+1;
}

const double * f3(const double ar[], int n)
{
    return ar+2;
}