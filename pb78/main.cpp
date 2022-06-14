#include <iostream>
using namespace std;
class B
{
protected:
    int i;

public:
    B(int j = 5)
    {
        cout << " cb ";
        i = j - 2;
    }
    ~B() { cout << " db "; }
    int get_i() { return i; }
};
class D1 : public B
{protected:
    int j;

public:
    D1(int k = 10)
    {
        cout << " cd1 ";
        j = i - k + 3;
    }
    ~D1() { cout << " dd1 "; }
};
class D2 : public D1
{
    int k;

public:
    D2(int l = 15)
    {
        cout << " cd2 ";
        k = i + j - l + 3;
    }
    ~D2() { cout << " dd2 "; }
};
D1 f(D1 d1, D2 d2) { return d1.get_i() + d2.get_i(); }
int main()
{
    D2 ob2;
    D1 ob1(3);
    cout << f(ob1, ob2).get_i() + ob2.get_i();
    return 0;
}
//datele lui d1 sunt private deci nu s vizibile in d2
//punem rpotected la d1
//afiseaza  cb  cd1  cd2  cb  cd1  cb  cd1 6 dd1  db  dd1  db  dd2  dd1  db  dd1  db  dd2  dd1  db