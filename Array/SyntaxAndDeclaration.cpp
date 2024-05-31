#include<iostream> //1
using namespace std;
// Array starts from 0
int main(){
               //  0  1  2  3  4  5  6
    int arr[7] = {40,41,42,43,44,45,46};
               // 0  1  2  3  4  5  6 
    cout<<arr[4];

    cout<<endl;
 
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}
