//#include <iostream>
//using namespace std;
//
//class A{
//    int x;
//public:
//    A(int i = 25){x = i; }
//    int& get_x() { return x; }
//    void set_x(int i) {  x = i; }
//    A& operator=(A a1){
//        set_x(a1.get_x());
//        return *this;
//    }
//};
//
//int main()
//{
//    A a(18), b(7);
//    (b=a).set_x(27);
//    int i;
//    i=b.get_x();
//    return 0;
//}



//Var2...............................................................................................................



//#include <iostream>
//using namespace std;
//
//class A{
//    int x;
//public:
//    A(int i = 25){ x = i; }
//    int get_x() const{ return x;}
//    void set_x(int i){  x=i; }
//    A operator=(A a1)
//    {
//        set_x(a1.get_x());
//        return a1;
//    }
//};
//
//int main()
//{
//    A a(18), b(7);
//    (b=a).set_x(27);
//    int i;
//    i=b.get_x();
//    cout<<i;
//    return 0;
//}



//Var3...............................................................................................................


//#include <iostream>
//using namespace std;
//
//class A
//{
//    int *x;
//public:
//    A(int i = 25){ x = new int(i); }
//    int& get_x() const  { return *x;  }
//    void set_x(int i) { x = new int(i); }
//    A& operator=(A a1)
//    {
//        set_x(a1.get_x());
//        return *this;
//    }
//};
//
//int main()
//{
//    A a(18), b(7);
//    (b=a).set_x(27);
//    int i;
//    i=b.get_x();
//    cout<<i;
//    return 0;
//}




//Var4................................................................................................................


#include <iostream>
using namespace std;

class A {
    int *x;
public:
    A() {  x = new int(0);  }
    A(int i) { x = new int(i); }
    int& get_x() const { return *x; }
    void set_x(int i) { x = new int(i); }
    A operator=(A a1) { set_x(a1.get_x());return a1;}
};

class B : public A {
    int y;
public:
    B() : A() { y = 0; }
    B(int i) : A(i){ y = i;}
    void afisare() const { cout << y; }
};

int main() {
    B a(112), b, *c;
    int i;
    i = (b = a).get_x();
    (c = &a)->afisare();
    return 0;
}