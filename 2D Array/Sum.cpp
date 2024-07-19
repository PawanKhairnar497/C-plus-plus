// Write a program to print sum of all the elements of a 2D matrix 
#include<iostream>  // 6
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the no.of rows:- ";
    cin>>m;
    cout<<"Enter the no.of columns:- ";
    cin>>n;
    // Input
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    // Sum
      int sum = 0;
      for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            sum += arr[i][j];
        }
      }
      cout<<"Sum of array is:- "<<sum;
}
