#include <iostream>

int foo (int x, int y ) {
    return x + y - 2020;
}

int foo (int x) {
    return x + 2020;
}

int main () {
    std::cout << foo(5);
}