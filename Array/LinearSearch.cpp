#include<iostream>  // 8
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

    int x;
    cout<<"Enter the element you want to search:-  ";
    cin>>x;
  
  /*
   //Search
   for(int i=0;i<=n-1;i++){
       if(arr[i]==x) cout<<"Element is Present";
   }
*/
 
  // search
  // check mark
  bool flag = false; // false --> not present
  for(int i=0;i<=n-1;i++){
    if(arr[i]==x) flag = true;
  }
  if(flag==true) cout<<"Element is present";
  else cout<<"404 element is not present";

}