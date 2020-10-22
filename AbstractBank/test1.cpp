#include <iostream>

using namespace std;

class Lwanda
{
    private:
        int x;
    public:
        Lwanda();
        Lwanda(double a) : x(a){}
        ~Lwanda();
        Lwanda operator+(const Lwanda & l) const;
        Lwanda operator*(int a) const;
        friend Lwanda operator*( int n, const Lwanda & a);
        friend ostream & operator<<(ostream & os, const Lwanda & l);

};

Lwanda::Lwanda()
{
    x = 0;
}

Lwanda Lwanda::operator+(const Lwanda & l) const
{
   return  x + l.x;
}

Lwanda Lwanda::operator*(int a) const 
{
   return x * a;
}

Lwanda operator*(int n, const Lwanda & a)
{
     return n * a;
}

Lwanda::~Lwanda(){};

ostream & operator<<(ostream & os, const Lwanda & l)
{
    os << l.x << endl;
    return os;
}

int main()
{
    Lwanda Magere(3);
    Lwanda Oduor(2);
    Lwanda Onyango;

    Onyango = Magere + Oduor;

    cout << Onyango << endl;

    Onyango = 3 * Magere;

    cout << Onyango << endl;



    return 0;
}