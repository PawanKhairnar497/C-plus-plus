#include<iostream>
using namespace std;
int main(){

    int x = 5;
    int *ptr = &x;
    int **p = &ptr;

    cout<<x<<endl;
    cout<<ptr<<endl; // Address of x --> 0x61fe14
    cout<<p;  // Address of ptr --> 0x61fe08

    cout<<endl;

    cout<<x<<endl;
    cout<<*ptr<<endl; // value of x --> 5
    cout<<**p;  // value of ptr --> 5

    cout<<endl;

    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*p;

}