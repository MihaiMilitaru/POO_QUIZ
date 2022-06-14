//#include <iostream>
//using namespace std;
//
//class C {
//    float z;
//public:
//    C() { z = 1.3; }
//    float op(float x, float y, float t) {
//        return x + y + z + t;
//    }
//    float op(float x, float y = 1.0) {
//        return x + y + z;
//    }
//    float op() {
//        return z;
//    }
//};
//
//int main() {
//    C c;
//    float i,j, k;
//    i=c.op(1);
//    j=i+c.op(2.2, 4.8);
//    k=c.op(2.2, 3.5, 4);
//
//    cout<<i<<j<<k;
//
//    return 0;
//}
//


//Var 2...........................................................................


//#include <iostream>
//using namespace std;
//
//class C {
//    float z;
//public:
//    C() { z = 1.3; }
//    float op(float x, float y, float t) {
//        return x + y + z + t;
//    }
//    float op(float x, float y ) {
//        return x + y + z;
//    }
//    float op(float x) {
//        return x + z;
//    }
//};
//
//int main() {
//    C c;
//
//    float i,j, k;
//    i=c.op(1.2);
//    j=i+c.op(2.2, 4.8);
//    k=c.op(2.2, 3.5, 4);
//
//    return 0;
//}


//Var3...................................................................................................

//#include <iostream>
//using namespace std;
//
//class C {
//    float z;
//public:
//    C() { z = 1.3; }
//    float op(float x = 2.0, float y = 1.2, float t = 1.5) {
//        return x + y + z + t;
//    }
//    int op(int y) {
//        return y + z;
//    }
//    double op(double y) {
//        return y + z;
//    }
//
//};
//
//int main() {
//    C c;
//    float i,j, k;
//    i=c.op();
//    j=i+c.op(1.2);
//    k=c.op(2);
//    cout<<i<<j<<k;
//
//    return 0;
//}



//Var4...................................................................................................

//#include <iostream>
//using namespace std;
//
//class C {
//    float z;
//public:
//    C() { z = 1.3; }
//    float op(float x = 2.0, float y = 1.2, float t = 1.5) {
//        return x + y + z + t;
//    }
//    int op(int y) {
//        return y + z;
//    }
//    double op(double y) {
//        return y + z;
//    }
//
//};
//
//int main() {
//    C c;
//    float i,j, k;
//    i=c.op();
//    j=i+c.op(1.2);
//    k=c.op(2);
//
//    return 0;
//}






















