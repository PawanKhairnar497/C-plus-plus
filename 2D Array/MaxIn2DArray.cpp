// Write a program to find the largest element of a given 2D array of integers
#include<iostream>  // 5
#include<climits>
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
    // Maximum 
    int max = INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"Maximum number is:- "<<max;
}
// 1 3
// 6 7 
// Maximum number is:- 7