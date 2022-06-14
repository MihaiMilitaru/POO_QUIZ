#include <iostream>
using namespace std;
class cls {
    static int x;

public:
    cls(int i = 1) { x = i; }
    int f(cls a) { return x + a.x; }
    static int g(cls a) { return a.f(a) / 2; }
};
int cls::x = 7;
int main()
{
    cls ob;
    cout << cls::g(ob);
    return 0;
}

//eroare la linia 9 functia f trebuie apelata de un obiect si are nevoie de parametru un ob de tip cls
//afiseaza 1
