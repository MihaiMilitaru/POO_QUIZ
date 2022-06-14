#include <iostream>
using namespace std;

class B {protected:
    B () { cout << "B"; }
public:
    B (int x) { cout << "B(int)"; }
};

class D : B {
public:
    D () { cout << "D"; }
};

int main () {
    D d;
    return 0;
}