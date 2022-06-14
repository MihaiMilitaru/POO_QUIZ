#include <iostream>
using namespace std;

class B
{ int i;
  public: B() { i=80; }
          virtual int get_i() { return i; }
};
class D: public B
{ int j;
  public: D() { j=27; }
          int get_j() {return j; }
};
int main()
{ B *p=new B;
  cout<<p->get_i();
  cout<<((D*)p)->get_j();
  return 0;
}

//eroare la linia 15 nu se poate realiza upcasting ul
//solutie pointer de tip B la linia 15
//afiseaza 80390