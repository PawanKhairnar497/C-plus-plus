// Write a program to store roll number and marks obtained by 4 students side by side in a matrix 
#include<iostream>  // 4
using namespace std;
int main(){
    int arr[2][4];
    // Input
    for(int i=0;i<=1;i++){
        for(int j=0;j<=3;j++){
            cin>>arr[i][j];
        }
    }
    // Output
    for(int i=0;i<=1;i++){
        for(int j=0;j<=3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
// 1 2 3 4
// 90 91 92 93
// 1 2 3 4 
// 90 91 92 93 