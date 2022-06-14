#include <iostream>
using namespace std;

class B {
protected:
    static int count;
public:
    B() {count++;}
    static void display () {
        cout << count;
    }
};

class D: public B {
public:
    void triple () {
        this->count *= 3;
    }
};

int B::count = 0;

int main () {
    D vd[] = {D(), D(), D(), D(), D()};
    vd[2].triple();
    B::display();
    return 0;
}
