#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"NO.of rows:- ";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
            cout<<(char)(j+64)<<" ";
         }
      cout<<endl;
    }
}

// A B C D
// A B C D
// A B C D
// A B C D

