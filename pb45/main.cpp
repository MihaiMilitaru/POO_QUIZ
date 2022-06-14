#include<iostream>
using namespace std;

class cls
{
    int x;
public: cls(int i=3) {x=i;}
    const int &f() const{ return x;}
};
int main()
{
    const cls a(-3);
    int b=a.f();
    cout<<b;
    return 0;
}

//eroare la linia 8 functia f este declarata constanta deci trebuie sa intoarca o referinta constanta
//solutie punem const int
//afiseaza -3