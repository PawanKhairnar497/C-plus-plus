#include<iostream>
using namespace std;
int main(){
    // Display this AP 1,3,5,7,9..upto 'n' terms
    int n,i;
    cout<<"Enter a number:-  ";
    cin>>n;

    // for(i=2;i<=2*n-1;i+=2)
    // {
    //     cout<<i<<endl;
    // }

    // Seperate variable
    // 1 3 5 7 9 ....
    // 4 7 10 13 16 ...
    int a = 1;    // int a = 4;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        a = a + 2;  // a = a + 3;
    }

}