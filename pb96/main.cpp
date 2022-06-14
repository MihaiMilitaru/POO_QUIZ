#include <iostream>
using namespace std;


class A
{
protected: int x;
public: A(int i = -16) { x = i; }
		virtual int f(A a) { return x + a.x; }
		void afisare() { cout << x; }
};
class B: public A
{
public: B(int i=3):A(i){}
		virtual int f(A a) { return A::f(a)+1; }
};
int main()
{
	A *p1 = new B, *p2 = new A, *p3 = new A(p1->f(*p2));
	p3->afisare();
	return 0;
}

//eroare la linia 15 obiectul A are x.ul protected deci nu poate fi accesat in functia f din interiorul clasei B
//solutie folosim virtual
//afiseaza -12