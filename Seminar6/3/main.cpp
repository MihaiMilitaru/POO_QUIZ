#include <iostream>
struct A {
    virtual void foo () {}
};
struct B : public A {
    void foo () {};
};
class D: public B {
public:
    void foo () {};
    std::string bar() {return "bar";}
};
int main () {
    A *p = new D();
    if(dynamic_cast<B*>(p)) {std::cout << "Type is B";}
    else if (dynamic_cast<D*>(p)) {std::cout << "Type is D";}
    else { std::cout << "Conversion failed";}
}