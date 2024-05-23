// Take positive integer input & tell if it is a three digit number or not  

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer :  ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Integer is a 3 digit number";
    }
    else{
        cout<<"Integer is not a 3 digit number";
    }
return 0;
}


