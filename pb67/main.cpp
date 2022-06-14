#include <iostream>
using namespace std;

class Y;

class Z;

class X {
    int x;

public:
    X(int n = 0) { x = n; }
    friend Z;
};

class Y {
    int y;
    friend Z;
};

class Z {
public:
    void f(X u) { cout << u.x; }
};

int main()
{
    X a;
    Z b;
    b.f(a);
}

// eroare la linia 23 ob u are datele private
//solutie clasa Z sa fie friend cu clasa X
// afiseaza 0