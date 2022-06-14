#include <iostream>
struct A {
    virtual void foo () {}
};
struct B : public A {
    void foo () {};
};
struct D: public B {
    void foo () {};
    std::string bar() {return "bar";}
};
int main () {
    A *p = new B();
    D *pd = dynamic_cast<D*>(p);
    if (pd != nullptr) { std::cout << "D"; }
    else { std::cout << "incompatible"; }
    std::cout<<pd->bar();
}
