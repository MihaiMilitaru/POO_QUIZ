#include <iostream>
using namespace std;

class cls
{
public:
    int x;
    cls() { x = 3; }
    void f(const cls &c)const { cout << c.x; }
};

int main()
{
    const cls d;
    d.f(d);
}

//eroare la linia 15 f este metoda deci trebuie apelata prin d
// d este const dar functia f nu este deci atat functia cat si argumentul ei trebuie sa fie const
//afiseaza 3