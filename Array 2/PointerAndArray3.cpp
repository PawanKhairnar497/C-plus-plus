#include<iostream>   // 5
using namespace std;
int main(){

    int arr[] = {4,2,6,1,7};
    int *ptr = arr;

    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
    //  cout<<i[ptr]<<" ";
        ptr++;
    }
    ptr = arr;  // ptr is pointing 1st element
 
    *ptr = 8;  // ptr[0] = 8
    ptr++;   // ptr is pointing 2nd element

    *ptr = 9;
    ptr--; // ptr is pointing 1st element

 cout<<endl;

    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;  // ptr is pointing 1st element
 
}
// pointer++ increase addresses  by 4

    // x40 = 4
   // ptr++

    // x44 = 2
   // ptr++
   
    // x48 = 6
   // ptr++ 
    
    // x52 = 1
   // ptr++ 
    
    // x57 = 7
  // ptr++

