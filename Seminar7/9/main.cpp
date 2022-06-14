#include <iostream>
using namespace std;

template <class T> void foo (T a, T b) {
    T aux  = a;
    a = b;
    b = aux;
}

template <> void foo (int a, int b) {
    cout << "swap<int>" << endl;
    int aux = a;
    a = b;
    b = aux;
}

int main () {
    int i = 2022, j = 5;
    foo(i, j);
    cout << i << " " << j << endl;
    return 0;
}
