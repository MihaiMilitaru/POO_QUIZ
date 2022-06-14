#include <iostream>
using namespace std;
class cls1 {
protected:
    int x;

public:
    cls1(int i = 10) { x = i; }
    int get_x() { return x; }
};
class cls2 : public cls1 {
public:
    cls2(int i)
            : cls1(i)
    {
    }
};
int main()
{
    cls2 d(37);
    cout << d.get_x();
    return 0;
}

//eroare la linia 21; cls2 mosteneste by default private pe cls1 deci nu avem acces la metodele lui cls1
//solutie punem mostenire public de la cls1 la cls2
//afiseaza 37