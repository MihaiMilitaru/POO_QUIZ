#include <iostream>
using namespace std;
class B {
protected:
    int x;

public:
    B(int i = 28) { x = i; }
    virtual B f(B ob) { return x + ob.x + 1; }
    void afisare() { cout << x; }
};
class D : public B {
public:
    D(int i = -32)
            : B(i)
    {
    }
    B f(B ob) { return B::f(ob); }
};
int main()
{
    B *p1 = new D, *p2 = new B, *p3 = new B(p1->f(*p2));
    p3->afisare();
    return 0;
}


//eroare la linia 18 nu avem acces la mebrul clasei B deoarece e specificatorul protected si nu avem acces la membrii lui ob
// solutie functia f este mostenita virtual deci folosim operatorul de rezolutie de scop pentru a apela functia f din clasa B mostenita si in clasa parinte D
// va afisa -3