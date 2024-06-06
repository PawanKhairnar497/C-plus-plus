#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    for(int i=1;i<=n;i++){
        // cout<<fact(i)<<endl;
        int fact = 1;
        for(int j=2;j<=i;j++){
            fact *= j;
        }
        cout<<fact<<endl;
    }
}
// Enter the number:- 7
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
