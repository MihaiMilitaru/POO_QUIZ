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
int main()
{
    A v[] = {*(new A(3)), *(new A(7))};
    v[0].afis();
    return 0;
}

//eroare la linia 16 metoda nu este pointer
// solutie folosim v[0].afis()
//afiseaza 3