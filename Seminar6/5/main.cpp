#include <iostream>
class C {
protected:
    int x;
public:
    C(int y): x(y) {}
    virtual C operator+(const C& c) const {
        return C(this->x + c.x);
    }
    friend std::ostream& operator << (std::ostream& o, C c) {
        o << c.x; return o;
    }
};

class D: public C {
public:
    D(int y) : C(y) {}
    C operator+(const C& c) const {
        return C(x + 22);
    }
};

int main () {
    C *c = new D(4);
    std::cout << *c + C(2);
}
