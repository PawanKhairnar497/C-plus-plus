#include<iostream>  // 12
using namespace std;
int main(){
   // Count the number of elements in given array greater than a given number x
       int n;
       cout<<"Enter size of array :- ";
       cin>>n;

       int arr[n];

       //input
       for(int i=0;i<=n-1;i++){
          cin>>arr[i];
       }

// given number
       int x = 50;

       int count = 0;
       //output
       for(int i=0;i<=n-1;i++){
          if(arr[i]>x)  count++;
       }
    cout<<"Number of elements , Greater than x is "<<count;
}