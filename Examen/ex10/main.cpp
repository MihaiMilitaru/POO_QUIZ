//#include <iostream>
//using namespace std;
//class C {
//    int *p;
//public:
//    C (int *q) : p(q) {}
//    void reload () { delete p; p = new int;}
//    void set (const int * const q) { *p = *q; }
//};
//int main () {
//    int x = 20210614;
//    C ob(&x);
//    const int& rx = x;
//    ob.reload(); ob.set(&rx);
//    return 0;
//}



//Var2.............................................................................................................

//#include <iostream>
//using namespace std;
//class C {
//    int *p;
//public:
//    C (int *q) : p(q) {}
//    void reload () { delete p; p = new int;}
//    void set (int q) const { *p = q; }
//};
//int main () {
//    int x = 20210614;
//    C ob(&x);
//    ob.reload(); ob.set(x);
//    return 0;
//}



//Var3...............................................................................................................



//#include <iostream>
//using namespace std;
//class C {
//    int * p;
//public:
//    C (int *q) : p(q) {}
//    void reload () { delete p; p = new int;}
//    void set (const int * const q) { *p = *q + 13; }
//    operator int () {return *p;}
//};
//int main () {
//    int *x = new int(20210601); const int& rx = *x;
//    C ob(x);
//    ob.reload(); ob.set(&rx);
//    cout << ob;
//    return 0;
//}




//Var5.................................................................................................................

#include <iostream>
using namespace std;
class C {
    int * const p;
public:
    C (int q) : p(new int(q)) {}
    void set (const int& q) const { *p = q + 59; }
    operator int ()const {return *p;}
};
int main () {
    const C ob(22973890);
    ob.set(488474);
    cout << ob;
    return 0;
}




