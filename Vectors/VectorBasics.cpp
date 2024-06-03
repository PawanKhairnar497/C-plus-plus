#include<iostream>  // 1
#include<vector> // header file for vector
using namespace std;
int main()
{
    
   vector<int> v;  // you need not mention the size 

// Input
// when you want to inserting / input use --> () 
   v.push_back(9);
   v.push_back(10);
   v.push_back(11);
   v.push_back(12);

// Output
   // if you want to update / access then use -->  []
   v[0] = 88;
   cout<<v[0]<<" ";
   cout<<v[1]<<" ";
   cout<<v[2]<<" ";
   cout<<v[3]<<" ";
  
   cout<<endl;

// Address
// vector capacity doubles every time
   cout<<&v[0]<<" ";  //  0xbd1740
   cout<<&v[1]<<" ";  //  0xbd1744 
   cout<<&v[2]<<" ";  //  0xbd1748
   cout<<&v[3]<<" ";  //  0xbd174c

}
