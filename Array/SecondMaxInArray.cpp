#include<iostream>  // 11

#include<climits>

using namespace std;
int main(){

    int n;
    cout<<"Enter size of array :- ";
    cin>>n;

    int arr[n];

    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

//Maximum
      int max = INT_MIN;
    //output
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }

    cout<<"Maximum number is--> "<<max<<endl;

//Second Maximum
     int smax = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && smax<arr[i]) smax = arr[i];
    }

    cout<<"Second Maximum number is--> "<<smax;
}
