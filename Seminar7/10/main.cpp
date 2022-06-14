#include <iostream>
using namespace std;

class C {
public:
    C (int i=0) { cout << "C" << i;}
};

int main () {
    C *p = new C[100];
    return 0;
}

