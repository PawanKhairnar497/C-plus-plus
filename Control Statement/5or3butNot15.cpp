#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter an integer:-  ";
    cin>>a;
    // don't use && only use ||
    if(a%5==0 || a%3==0){
        if(a%15!=0){
            cout<<"The number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"Not matching condition";
        }
    }
    else{
        cout<<"Not matching condition";
    }
return 0;
}