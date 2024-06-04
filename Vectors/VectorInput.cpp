#include<iostream>  // 6
#include<vector>
using namespace std;
int main(){

// With size
   // vector<int> v(5);
     
    // for(int i=0;i<5;i++){
    //     cin>>v[i];
    // }

// Without size
   vector<int> v;

   int n;
   cout<<"Enter the no.of element you want to print :-  ";
   cin>>n;
//input
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
//output
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}