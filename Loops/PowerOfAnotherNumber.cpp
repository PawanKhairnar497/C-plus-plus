#include<iostream>
using namespace std;  // Calculate 'a' raised to the power 'b'
int main(){
    // Two numbers are entered through the keyboard.Write a program to find the value of one number raised to the power of another
    int a,b;
    cout<<"Enter the base:- ";
    cin>>a;
    cout<<"Enter the exponent:- ";
    cin>>b; // 0 --> 1 because power=1;
    bool flag = true; // true means power negative
    if(b<0){
        flag = false;
        b = -b;
    }
    float power = 1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    if (flag==false){
        power = 1/power;
        b = -b;
    }
    if(a==0 && b==0) cout<<"Not Defined";
    else cout<<a<<" raised to the power "<<b<<" is--> "<<power;
}