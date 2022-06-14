#include <iostream>
using namespace std;
class cls {
    int x;

public:
    cls(int i = 25) { x = i; }
    int f() const;
};
int cls::f() const{ return x; }
int main()
{
    const cls d(15);
    cout << d.f();
    return 0;
}

//eroare la linia 14 un obiect const nu poate apela functii care nu sunt const
//solutie punem f const
//afiseaza 15