#include<iostream>  // 2
#include<vector> // header file for vector
using namespace std;
int main()
{
    
   vector<int> v;  // you need not mention the size 

// Input
// when you want to inserting / input use --> () 
//    v.push_back(9);
//    cout<<v.size()<<endl; // 1

//    v.push_back(10);
//    cout<<v.size()<<endl; // 2

//    v.push_back(11);
//    cout<<v.size()<<endl; // 3
    
//    v.push_back(12);
//    cout<<v.size();  // 4

cout<<endl;

   v.push_back(9);
   cout<<v.capacity()<<endl; // 1

   v.push_back(10);
   cout<<v.capacity()<<endl; // 2

   v.push_back(11);
   cout<<v.capacity()<<endl; // 4
   
   v.push_back(12);
   cout<<v.capacity(); // 4

}