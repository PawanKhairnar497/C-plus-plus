#include<iostream>
using namespace std;
int main() {
    cout<<"Enter an integer :- ";
    int n;
    cin>>n;
    // If condition 1 is true then compiler don't check condition 2
    if(n%5==0 || n%3==0){
         cout<< "The number is divisible by 5 or 3 ";
    }
    else {
        cout<<"The number is not divisible by 5 and it is not divisible by 3";
    }
return 0;
}
