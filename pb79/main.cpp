#include <iostream>
using namespace std;
class B {
    int x;

public:
    B(int i = 2)
        : x(i)
    {
    }
    int get_x() const { return x; }
};
class D : public B {
    int* y;

public:
    D(int i = 2)
        : B(i)
    {
        y = new int[i];
        for (int j = 0; j < i; j++)
            y[j] = 1;
    }
    D(D& a)
    {
        y = new int[a.get_x()];
        for (int i = 0; i < a.get_x(); i++)
            y[i] = a[i];
    }
    int& operator[](int i) const{ return y[i]; }
};
ostream& operator<<(ostream& o, const D& a)
{
    for (int i = 0; i < a.get_x(); i++)
        o << a[i];
    return o;
}
int main()
{
    D ob(5);
    cout << ob;
    return 0;
}

//eroare la linia 35; obiectul a este de tip const, dar metoda nu este
//solutie punem const la supraincarcarea operatorilor
//afiseaza 1111