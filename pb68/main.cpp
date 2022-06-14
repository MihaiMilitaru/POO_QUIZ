#include <iostream>
using namespace std;

class cls2;
class cls2 {
public:
    int vi;
    cls2(int v = 20) { vi = v; }
};

class cls1 {
public:
    int vi;
    cls1(int v = 30) { vi = v; }
    cls1(cls2 p) { vi = p.vi; }
};



cls1 f(cls1 p)
{
    p.vi++;
    return p;
}

int main()
{
    cls1 p;
    f(p);
    cout << endl
         << p.vi;
    cls2 r;
    f(r);
    cout << endl
         << r.vi;
}

//eroare la linia 15 corpul clasei cls2 apare abia sub cel al clasei cls1 prin urmare functia din interiorul clasei cls1
//nu poate initializa un obievt de tip cls2
//solutie punem clasa cls2 deasupra clasei cls1