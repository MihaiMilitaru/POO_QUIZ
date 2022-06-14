#include <iostream>
#include <typeinfo>
using namespace std;

class A
{
    int n;

public:
    A(int x) { n = x; }
    void afis() { cout << n; }
};

class B : public A
{
public:
    B(int x) : A(x) {}
};
int main()
{
    int x;
    cin >> x;
    if (x > 0)
    {
        A ob(2);
        ob.afis();
    }
    else
    {
        B ob(2);
        ob.afis();
    }

    return 0;
}

//eroare la linia 31 obiectul ob nu este vizibil in scope ul din main in afara if ului