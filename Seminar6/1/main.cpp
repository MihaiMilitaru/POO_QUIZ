#include<iostream>
struct Integer {
    int x;
    Integer(const int val = 0) : x(val){}
    friend Integer operator+ (Integer i, Integer j) {
        return Integer(j.x + i.x);
    }
    friend std::ostream& operator<<(std::ostream& o, Integer i) {
        o << i.x; return o;
    }
};
int main () {
    Integer i(25), j(5), k(2020);
    std::cout << (i + j + k);
}
