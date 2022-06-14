#include <iostream>
using namespace std;

class C {
    int x;
public:
    C (int y = 0) : x(y) {}
    C operator+ (const C& c) {
        return C(this->x + c.x);
    }
    friend ostream& operator << (ostream& out, const C& c) {
        return out << c.x;
    }
};

int main () {
    C c1(2022), c2(05), c3(16);
    cout << c1 + c2 + c3;
    return 0;
}
