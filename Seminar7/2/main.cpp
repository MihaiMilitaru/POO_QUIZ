#include <iostream>
using namespace std;

class C {
    const int i;
public:
    C (int j = 2022):i(j) {  }
    operator int () { return this ->i; }
};

int main () {
    C c1(5), c2;
    cout << c1 << c2 << endl;
    return 0;
}
