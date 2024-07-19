// Write a program to print the transpose of the matrix entered by the user and store it in a new matrix
#include<iostream>  // 9
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
    // Store the transpose
       int t[n][m];
       for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
             t[i][j] = arr[j][i];
          }
       }
    // Printing Transpose matrix    
       for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
             cout<<t[i][j]<<" ";
          }
          cout<<endl;
       }
}