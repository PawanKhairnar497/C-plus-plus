#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"NO.of rows:- ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  //j<=n+1-i
            cout<<" "<<j ;
        }
        cout<<endl;
    }
}
// 1 
// 1 2
// 1 2 3
// 1 2 3 4  

// j<=n; cout<<i;
 //  1 1 1 1
 //  2 2 2 2
 //  3 3 3 3
 //  4 4 4 4 


// j<=i; cout<<i;
  //  1
  //  2 2
  //  3 3 3
  //  4 4 4 4

// j<=n; cout<<n;
 //  4 4 4 4
 //  4 4 4 4
 //  4 4 4 4
 //  4 4 4 4

// j<=i; cout<<n; 
   //  4
  //   4 4
  //   4 4 4
  //   4 4 4 4