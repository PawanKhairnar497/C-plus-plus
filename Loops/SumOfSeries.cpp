#include<iostream>
using namespace std;
int main(){
    // Print the sum of this series
    // 1 - 2 + 3 - 4 + 5 - 6 ....
    int i,n;
    cout<<"Enter a Number:- ";
    cin>>n;
    int sum=0;
    // for(i=1;i<=n;i++){
    //     if(i%2!=0) sum += i;
    //     else sum -= i;
    // }

    if(n%2==0)  sum = -n/2;
    else sum = -n/2 +n;
      cout<<sum;
}