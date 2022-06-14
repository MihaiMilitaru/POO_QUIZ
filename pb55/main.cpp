#include <iostream>
using namespace std;
class B
{
    int i;

public:
    B() { i = 50; }
    virtual int get_i() { return i; }
};
class D : public B
{
    int j;

public:
    D() { j = 47; }
    int get_j() { return j; }
};
int main()
{
    B *p = new D;
    cout << p->get_i();
    cout << ((D *)p)->get_j();
    return 0;
}


//eroare la linia 21 nu merge dwoncasting ul
//solutie face upcasting
//afiseaza 5047