#include<iostream>  //2
using namespace std;
int main(){

    int arr[7];    // Array starts from 0 & ends on 6
    cout<<"Enter 7 array elements :- "<<endl;
    
    // Input
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }

    //Output
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}
