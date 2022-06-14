#include <iostream>
#include <string>
struct A {
    A () {std::cout<<"A";}
    ~A () {std::cout<<"~A";}
};
struct B :public A {
    A a;
    B() {std::cout<<"B";}
    ~B() {std::cout<<"~B";}
};
struct C:public B {
    C () {std::cout << "C";}
    ~C (){std::cout << "~C";}
};

int main () {
    A *c = new C();
}


