#include <iostream>
struct A {
    virtual void foo () {std::cout<<"A";}
};
struct B : public A {
    void foo () {std::cout<<"B";};
};
class D: public B {
public:
    void foo () {std::cout<<"D";};
};
int main () {
    A *pa[] = {new B, new D, new B, new D, new B, new D};
    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            D d = dynamic_cast<D&>(*pa[i]);
            d.foo();
        } else {
            B b = dynamic_cast<B&>(*pa[i]);
            b.foo();
        }
    }
}
