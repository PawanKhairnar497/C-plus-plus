#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No.of rows:- ";
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        //spaces
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        //Triangle
        for(j=1;j<=i;j++){
            cout<<" "<<j;
        }
        //Number Triangle
        for(int q=i-1;q>=1;q--){
            cout<<" "<<q;
        }
        cout<<endl;
    }
}
//       1
//     1 2  1 
//   1 2 3  2 1 
// 1 2 3 4  3 2 1