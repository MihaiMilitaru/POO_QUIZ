class C{
    int c;
public:  C(int p=1){c=p;}
    const int & get()const{return c;}
};
int f(const C & op){return op.get();}
int main(){
    C o1;
    int x=f(o1);
    return 0;
}
