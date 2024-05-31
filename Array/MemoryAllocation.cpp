#include<iostream>  // 6    
using namespace std;
int main(){
    int arr[5];

    cout<<arr<<endl; // Address of first element

    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

    // 0x61fe00
    // 0x61fe04
    // 0x61fe08
    // 0x61fe0c 
    // 0x61fe10
  
  int rr[3] = {2,3,5};
    cout<<rr;  // Address of first element
  

}
