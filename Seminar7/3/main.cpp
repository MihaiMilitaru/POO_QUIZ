#include <iostream>
using namespace std;

class C {
public:
    C () {cout << "C"; }
    C (const C& c) { cout << "cpy-C"; }
    ~C () { cout << "~C";}
    static C getObject () {
        return C();
    }
};

void foo (C c) {}

int main () {
    foo(C::getObject());
    return 0;
}