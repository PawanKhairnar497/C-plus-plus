#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st Side :- ";
    cin>>a;
    cout<<"Enter 2nd Side :- ";
    cin>>b;
    cout<<"Enter 3rd side :- ";
    cin>>c;
    if((a+b>c) && (c+a>b) && (b+c>a)){
        cout<<a<<" ,"<<b<<" ,"<<c<<" Can be the sides of a triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
return 0;    
}
