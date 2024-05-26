#include<iostream>
using namespace std;
        
int a = 9;       // Global variable

void fun(int x,int y){
    cout<<"Address of function x -> "<<&x<<endl;
    cout<<"Address of function y -> "<<&y<<endl;
}

void f(){
    cout<<a;
}

int main(){
    // int x = 3;   // local variable
    // int y = 7;
    // cout<<"Address of main x -> "<<&x<<endl;
    // cout<<"Address of main y -> "<<&y<<endl;
    // fun(x,y);

    cout<<a<<endl;  // global variable

    cout<<a+7<<endl;
    f();
       
return 0;    
}