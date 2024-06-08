#include<iostream> // 3
using namespace std;
int main(){ 

    int x = 4;
    int *p = &x;
    
    int y = 9;
    int *q = &y;

    cout<<p<<endl;
    cout<<q;
    cout<<endl;

    float a = 9.8;
    float *b = &a;
    cout<<&a<<endl;
    cout<<b;
    cout<<endl;

    char c = 'c';
    char *d = &c;
    cout<<&c<<endl;
    cout<<d;
    cout<<endl; 

    bool e = true;
    bool *f = &e;
    cout<<&e<<endl;
    cout<<f;

}