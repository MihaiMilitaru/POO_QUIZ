#include <iostream>
using namespace std;
class cls {
    int x;

public:
    cls(int i = -20) { x = i; }
    int& f() { return x; }
};
int main()
{
    cls a(14);
    int b = a.f()++;
    cout << b;
    return 0;
}

//eroare la linia 13 functia f intoarce o referinta de tip const
//solutie stergem const
//afiseaza 14