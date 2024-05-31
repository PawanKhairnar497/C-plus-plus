#include<iostream>
using namespace std;
// Write a function to find out the first & last Digit of a number without returning anything 
void find(int n,int *ptr1,int *ptr2){

    *ptr2 = n%10; //lastDigit

// while loop for firstDigit
    while(n>9){
        n/=10;
    }
    *ptr1 = n;   //firstDigit
    return ;

}

int main(){

    int n;
    cout<<"Enter the number :- ";
    cin>>n; 

    int firstDigit,lastDigit;

    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;

    find(n,ptr1,ptr2);  // function calling
    cout<<firstDigit<<" "<<lastDigit;

}