#include <iostream>
using namespace std;

class A {
public:
    virtual void foo () {cout << "A::foo" << endl;}
};

class B: public A {
public:
    void foo () {cout << "B::foo" << endl;}
};

void bar (A& a) {
    B *pb = dynamic_cast<B*>(&a);
    pb->foo();
}

int main () {
    B b;
    bar(b);
    return 0;
}