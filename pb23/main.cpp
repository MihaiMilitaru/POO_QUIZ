#include <iostream>
using namespace std;

class B {
protected:
    static int x;
    int i;

public:
    B()
    {
        x++;
        i = 1;
    }
    ~B() { x--; }
    static int get_x() { return x; }
    int get_i() { return i; }
    virtual int f1(B o) { return 5 + get_i(); }
};
int B::x;
class D : public B {
public:
    D()
    {
        x++;
        i++;
    }
    ~D()
    {
        x--;
        i--;
    }
    int f1(B o) { return 5 + get_i(); }
};
int f(B* q)
{
    return (q->get_x()) + 1;
}
int main()
{
    B* p = new B[10];
    cout << f(p);
    delete[] p;
    p = new D;
    cout << p->f1(*p);
    delete p;
    cout << D::get_x();
    return 0;
}

//eroare la linia 45 functia f1 nu este in clasa B
//solutie punem functia f1 in clasa B si o putem mosteni virtual sau nu si in clasa derivata D
//avem pointer de tip *B dar functia f1 nu apare in clasa B chiar daca pointeaza catre un obiect de tip D iar in D apare functia f1
//afiseaza 1170