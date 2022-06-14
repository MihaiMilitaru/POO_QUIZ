#include <iostream>
#include <string>
struct A {
    A (int i=0) {std::cout<<"A" << i;}
    ~A () {std::cout<<"~A";}
};
struct B : public A {
    A a;
    B() : a(25) {std::cout<<"B";}
    virtual ~B() {std::cout<<"~B";}
};
struct C: public B {
    C () {std::cout << "C";}
    ~C (){std::cout << "~C";}
};

int main () {
    A *a = new C();
    delete a;
}
