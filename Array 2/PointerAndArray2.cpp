#include<iostream>   // 4
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int *ptr = arr;  //Arrays first element's address  --> 0x61fdf0

    cout<<ptr;   // 0x61fdf0
    cout<<endl;
    
    cout<<ptr[0];  // prints 0 element of array --> 4
    cout<<endl;

// method 1
    ptr[0] = 8;  // you can change array element value using pointer array
    
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

// method 2
    *ptr = 12;  // you can change array element value using pointer array

    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }


}