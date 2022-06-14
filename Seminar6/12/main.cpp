#include<iostream>
class B {
protected:
    int x;
public:
    B (int y = 2020) : x(y) {}
};

class D : public B {
public:
    D(int y) : B(y) {}
    D operator+ (const D& b) {
        return D(x + b.x);
    }
    operator int () const {return x;}
};

int main () {
    D d = (D(22) + D(5));
    std::cout << d;
}