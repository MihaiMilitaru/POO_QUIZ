#include <iostream>
struct A {
    A (int i=0) {std::cout<<"A" << i;}
    ~A () {std::cout<<"~A";}
};
struct B : public A {
    A a;
    B() : a(25) {std::cout<<"B";}
    ~B() {std::cout<<"~B";}
};
struct C: public A, public B {
    C () {std::cout << "C";}
    ~C (){std::cout << "~C";}
};

int main () {
    C c;
}

