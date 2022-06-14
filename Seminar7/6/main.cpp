#include <iostream>
using namespace std;

class B {
public:
    virtual void foo () { cout << "B::foo"; }
    ~B () {cout << "~B"; }
};

class D : public B {
public:
    void foo () { cout << "D::foo"; }
    ~D () { cout << "~D"; }
};

int main () {
    B *b = new D();
    b->foo();
    delete b;
    return 0;
}