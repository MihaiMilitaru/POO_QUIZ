#include <iostream>
using namespace std;


class A
{
    int x;
public:
    A(int i = 25) { x = i; }
    const int& f() const { return x; }
};
int main()
{
    A ob(5);
    cout << ob.f();
    return 0;
}

//eroare la linia 10 nu putem intoarce o referinta non-const cand apelam o functie de tip const
// solutie punem const in fata functiei f
//afiseaza 5
