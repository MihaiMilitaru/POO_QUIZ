#include <iostream>
using namespace std;
class B {protected:
    int x;

public:
    B(int i = 10) { x = i; }
    int get_x() { return x; }
};
class D : public B {
public:
    D(int i)
        : B(i)
    {
    }
    D operator+(const D& a) { return x + a.x; }
};
int main()
{
    D ob1(7), ob2(-12);
    cout << (ob1 + ob2).get_x();
    return 0;
}

//eroare la linia 16, x nu este vizibil in D deoarece datele din B sunt private
//solutie datele din B devin protected
//afiseaza -5