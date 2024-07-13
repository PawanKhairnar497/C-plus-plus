#include<iostream> // 3
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
    // Output
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}
// Enter the no.of rows:- 2
// Enter the no.of columns:- 3 
// 1 2 3 4 5 6
// 1 2 3 
// 4 5 6 