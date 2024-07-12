#include<iostream>
using namespace std;
int main(){

    // rows --> 3  (0-2)
    // columns --> 3  (0-2)   

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3] = {1,2,3,4,5,6,7,8,9}; // another way of declaration
    int crr[][3] = {1,2,3,4,5,6,7,8,9}; // this is also valid
    // int drr[3][] = {1,2,3,4,5,6,7,8,9}; // this is not valid
     cout<<arr[2][1];cout<<endl;  // 8
     cout<<brr[2][1];cout<<endl;  // 8
     cout<<crr[2][1];    // 8
    //  cout<<drr[2][1];  // declaration of  drr'

}
// 8
// 8
// 8
