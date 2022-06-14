#include <iostream>
using namespace std;

class C {
    int *i;
public:
    C (int& x) : i(&x) { }
    void set (int x) { *(this->i) = x;}
};

int main () {
    int i = 2022;
    C c(i);
    c.set(5);
    cout << i;
    return 0;
}
