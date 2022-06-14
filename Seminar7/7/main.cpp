#include <iostream>
using namespace std;

class A {
public:
    ~A () {cout << "~A";}
};
class B {
public:
    ~B () {cout << "~B";}
};
class C: virtual public A, public B {
public:
    ~C () {cout << "~C";}
};
class D: virtual public A, public B {
public:
    ~D () {cout << "~D";}
};
class E: public C, public D {
public:
    ~E () {cout << "~E";}
};

int main () {
    E e;
    return 0;
}
