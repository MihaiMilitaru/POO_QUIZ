#include<iostream>
struct B {
    virtual void foo () {std::cout<<"B";}
};
struct C: public B {
    void foo () {std::cout<<"C";}
};
struct D: public B {
    void foo () {std::cout<<"D";}
};
void call (B& b) {
    b.foo();
}
int main () {
    C c; D d;
    call(c); call(d);
}