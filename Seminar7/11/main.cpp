#include <iostream>
using namespace std;

class B {
public:
    virtual void bar () {cout << "B::bar";}
};
class D: B {
    friend void foo (D d) {
        B *b = &d;
        b->bar();
    }
public:
    void bar () {cout << "D::bar";}
};

int main () {
    D ob;
    foo(ob);
    return 0;
}