#include<iostream> // 9
using namespace std;
int main(){
// find the maximum value out of all the elements in the array
    int n;
    cout<<"Enter size of array :- ";
    cin>>n;

    int arr[n];

    //input
    for(int i=1;i<=n-1;i++){
        cin>>arr[i];
    }

    int max = arr[0];

    //output
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"Maximum number is :- "<<max;

}
