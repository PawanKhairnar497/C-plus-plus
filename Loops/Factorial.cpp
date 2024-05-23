#include<iostream>
using namespace std;
int main(){
    // print the factorial of given number
    int i,n;
    cout<<"Enter a number:- ";
    cin>>n;
    int factorial = 1;
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    cout<<factorial;
}
// 0 factorial is 1 
// if 1<=0 then cout>>factorial 