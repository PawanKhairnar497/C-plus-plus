#include<iostream>  // 3
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

   for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
   }

cout<<endl;

   v.pop_back(); // cut the last element  
   v.pop_back();

   for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
   }

}