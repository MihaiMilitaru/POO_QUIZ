class C{
    int c;
public:  C(int p=1){c=p;}
    const int & get()const{return c;}
};
int main(){
    const C o1;
    int x=o1.get();
    return 0;
}

