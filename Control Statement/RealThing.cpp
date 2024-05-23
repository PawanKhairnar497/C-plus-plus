#include<iostream>
using namespace std;
int main(){
    int a;
    // It converts into boolean number
    if(3+2%5)   // true -> 1 --> cout
        cout<<"This Works"<<endl;
    if(a=0.15) // (a=10) // false -> 2 --> won't print cout
        cout<<"Even This Works"<<endl;    
    if(-5)     // true -> 1 --> cout
        cout<<"Surprisingly even this works";
return 0;        
}       