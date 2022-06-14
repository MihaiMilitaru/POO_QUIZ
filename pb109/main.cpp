#include <iostream>
using namespace std;

struct X {   int i;
public:   X(int ii ) { i = ii; };
    int f1() const { return i; }
    X f2() {   int i=this->f1(); return X(34-i); }};
const X f3() {   return X(16); }
int f4(const X& x) { return x.f1(); }
int main() {X ob(11);
    cout<<f4(ob.f2().f1());
    return 0;
}

//eroare la linia 7 functia f2 este const dar in corpul ei apare this//solutie stergem const
//eroare la linia 9 obiectul x este de tip const deci trebuie sa apeleze functii const//solutie punem f1 const
//afiseaza 23