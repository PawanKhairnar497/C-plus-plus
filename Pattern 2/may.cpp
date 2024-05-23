#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No.of lines:- ";
    cin>>n;
// max(a,b)
int i,j;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<min(i,j);
    }
    cout<<endl;
}
}
// 1 1 1 1
// 1 2 2 2 
// 1 2 3 3
// 1 2 3 4