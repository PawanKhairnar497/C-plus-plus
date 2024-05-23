#include<iostream>
using namespace std;
int main() {
    cout<<"Enter an integer :- ";
    int n;
    cin>>n;
    // If condition 1 is false then compiler don't check second condition 
    if(n%5==0 && n%3==0){
         cout<< "The number is divisible by 5 and 3";
    }
    else {
        cout<<"The number is not divisible by 5 and 3";
    }
return 0;
}
