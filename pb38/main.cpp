#include<iostream>
using namespace std;

template<class X, class Y>
X f(X x, Y y)
{
    return x+y;
}
int *f(int *x,int y)
{
    return x-y;
}
int main()
{
    int *a=new int(200), *b=a;
    cout<<f(*a,*b);
    return 0;
}

//eroare la linia 16 nu putem aduna in functia template pointer de tip int cu un alt pointer de tip int
//afiseaza 400