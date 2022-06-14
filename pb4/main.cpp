#include <iostream>
using namespace std;
class problema {
    int i;

public:
    problema(int j = 5) { i = j; }
    void schimba() { i++; }
    void afiseaza() { cout << "starea curenta " << i << "\n"; }
};
problema mister1() { return problema(6); }
void mister2(problema o)
{
    o.afiseaza();
    o.schimba();
    o.afiseaza();
}
int main()
{
    mister2(mister1());
    return 0;
}

//eroare la linia 20 deoarece argumentul dat trebuie sa fie o valoare de tip problema, nu o referinta
// la linia 12 punem parametru cu transmitere prin valoare
// se va afisa
// starea curenta 6
//starea curenta 7