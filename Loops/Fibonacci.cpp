#include<iostream>
using namespace std;
int main(){
    // print the nth fibonacci number
    int n;
    cout<<"Enter the limit:- ";
    cin>>n;
    int i,a = 1,b = 1,sum = 0;
    for(i=1;i<=n-2;i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    cout<<b;
}