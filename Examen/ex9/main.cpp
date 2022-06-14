#include <iostream>
using namespace std;

//class Baza {
//protected:
//    int x,y;
//public:
//    Baza() {
//        this->x = 0;
//        this->y = 0;
//    }
//    Baza(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//    int Suma() {return x + y;}
//};
//
//class Derivata : public Baza {
//    double t;
//public:
//    Derivata(int x, int y, double t) {
//        Baza(x,y);
//        this -> t = t;
//    }
//    double Suma() {return x + y + t;}
//};
//
//int main() {
//    Derivata d(5, 3, 1.5);
//    int i= d.Suma();
//    cout<<i;
//}


//Var2................................................................................................................


//class Baza {
//protected:
//    int x,y;
//public:
//    Baza() {
//        this->x = 0;
//        this->y = 0;
//    }
//    Baza(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//    int Suma() {return x + y;}
//};
//
//class Derivata : public Baza {
//    double t;
//public:
//    Derivata() {
//        this -> t = 2.5;
//    }
//    Derivata(Derivata& derivata) {
//        Baza(derivata.x + 1, derivata.y + 1);
//        this -> t = derivata.t;
//    }
//    double Suma() {return x + y + t;}
//};
//
//int main() {
//    Derivata d;
//    Derivata d1(d);
//    int i=  d1.Suma();
//    cout<<i;
//}



//Var3..............................................................................................................


//class Baza {
//protected:
//    int x,y;
//public:
//    Baza() {
//        this->x = 0;
//        this->y = 0;
//    }
//    Baza(int x, int y) {
//        this->x = x;
//        this->y = y;
//    }
//    int Suma() {return x + y;}
//};
//
//class Derivata : public Baza {
//    double t;
//public:
//    Derivata() {
//        this->t = 2.5;
//    }
//    Derivata(Derivata& derivata) {
//        Baza(derivata.x + 1, derivata.y + 1);
//        this->t = derivata.t;
//    }
//    double Suma() {return x + y + t;}
//};
//
//int main() {
//    Derivata d;
//    Derivata d1(d);
//    int i=  d1.Suma();
//}



//Var4.................................................................................................................



//class Baza {
//protected:
//    int x,y;
//public:
//    Baza(int x=0, int y=0) {
//        this->x = x;
//        this->y = y;
//    }
//    int Suma() {return x + y;}
//};
//
//class Derivata : public Baza {
//    double t;
//public:
//    Derivata():Baza() {
//        this -> t = 2.5;
//    }
//    Derivata(Derivata& derivata) {
//        Baza(derivata.x + 1, derivata.y + 1);
//        this -> t = derivata.t;
//    }
//    double Suma() {return x + y + t;}
//};
//
//int main() {
//    Derivata d;
//    Derivata d1(d);
//    int i=  d1.Suma();
//}



//Var5.................................................................................................................

class Baza {
protected:
    int x,y;
public:
    Baza() {
        this->x = 0;
        this->y = 0;
    }
    Baza(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int Suma() {return x + y;}
};

class Derivata : public Baza {
    double t;
public:
    Derivata() {
        Baza(1,1);
        this -> t = 3.5;
    }
    Derivata(Derivata& derivata) {
        Baza(derivata.x + 1, derivata.y + 1);
        this -> t = derivata.t;
    }
    double Suma() {return x + y + t;}
};

int main() {
    Derivata d;
    Derivata d1(d);
    int i=  d1.Suma();
    cout<<i;
}
