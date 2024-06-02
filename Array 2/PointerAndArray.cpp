#include<iostream>  // 3
using namespace std;
int main(){

// First method of Array Pointer

    int arr[] = {4,2,6,1,7};
    int *ptr = arr;   //Arrays first element's address  --> 0x61fe00

    // int *ptr = &arr; --> error
    // int *ptr = arr[0]; --> error

    cout<<ptr;  // 0x61fe00
    cout<<endl;

    cout<<&arr[0];  // 0x61fe00
    cout<<endl;

// Second method of Array pointer

    int prr[] = {44,42,46,14,47};
    int *ptr1 = &prr[0];  // Arrays first element's address  --> 0x61fdd0

   cout<<ptr1;  // 0x61fdd0
   cout<<endl;

   cout<<&prr[0]; // 0x61fdd0

}