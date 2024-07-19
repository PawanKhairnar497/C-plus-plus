// Write a program to print the transpose of the matrix entered by the user and store it in a new matrix
#include<iostream>  // 8
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
    cout<<"\n";
    // print
      int sum = 0;
      for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;
    // Printing Transpose
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
}