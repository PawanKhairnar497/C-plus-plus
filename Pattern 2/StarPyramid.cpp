#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No.of rows:- ";
    cin>>n;
    int nst = 1;
    int nsp = n-1;
    int i,j,k;
    for(i=1;i<=n;i++){
        //spaces
        for(j=1;j<=nsp;j++){
           cout<<" ";
        }
        nsp--;
        for(k=1;k<=nst;k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
}
//    *
//   *** 
//  *****
// *******