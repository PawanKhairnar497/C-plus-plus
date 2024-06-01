#include<iostream>  // 7
using namespace std;
int main(){
    
    int n;
    cout<<"Enter size of array:- ";
    cin>>n;

    int arr[n];

    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int sum = 0;
  
   //output
   for(int i=0;i<=n-1;i++){
       sum = sum + arr[i];
   }
    cout<<"Sum of array is :- "<<sum;
 

}