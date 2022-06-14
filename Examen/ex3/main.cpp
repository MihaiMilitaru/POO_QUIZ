//#include <iostream>
//using namespace std;
//
//class B{
//        int b;
//public: B(int p=1){b=p;}
//};
//class D: public B{
//         int *d;
// public: D(int p){d=new int; *d=p;}
//         D(const D& s):B(s){d=new int; *d=*(s.d);}
//         ~D(){delete d;}
//         void set(int p){*d=p;}
//         D &operator=(D &);
//         void ff(){
//             cout<<*d;
//         }
//};
//
//D &D::operator=(D &dd) {
//    this->set(*dd.d);
//}
//
//int main()
//{D o1(2),o2(3);
//    o1.ff();
//    o2.ff();
// o1=o2;o2.set(4);
// o1.ff();
// o2.ff();
//
//return 0;
//}

// Var 2....................................................................................

#include <iostream>
using namespace std;

class B{
    int b;
public: B(int p=1){b=p;}
};
class D: public B{
    int *d;
public: D(int p){d=new int; *d=p;}
    D(const D& s):B(s){d=new int; *d=*(s.d);}
    void set(int p){*d=p;}
    void ff(){
             cout<<*d;
         }
};

int main()
{D o1(2),o2(o1);
    o1=o2;o2.set(4);
    o1.ff();
    o2.ff();
    return 0;
}
