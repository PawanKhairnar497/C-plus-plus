#include<iostream> // 4
using namespace std;
int main(){
    int x = 12;
    int *p = &x;

    cout<<p; // address of a variable --> 0x61fe14
    cout<<endl;

    // dereference operator
    cout<<*p; // *p --> 12
 // prints the address's variable value
   
   // p ke andar jo address rakha hai,us address pe jao & vahan ki variable ki value print karo

}    