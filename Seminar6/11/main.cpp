#include<iostream>
#include<climits>
struct Array {
    int *x, size;
    Array(const int& val = 5) : x(new int[val]), size(val){
        for (int i = 0; i < size; i++) *(this->x+i) = i;
    }
    int operator[](unsigned i) const {
        return i > size ? INT_MAX : x[i];
    }
};
int main () {
    Array a(2020);
    for (unsigned i = 0; i < a.size; i++) {
        std::cout << a[i] << " ";
    }
}
