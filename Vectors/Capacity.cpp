#include<iostream>  // 4
#include<vector> // header file for vector
using namespace std;
int main()
{
    
   vector<int> v;  
                    //  size  capacity
   v.push_back(9);  //   1     1
   v.push_back(10); //   2     2
   v.push_back(11); //   3     4
   v.push_back(12); //   4     4

   v.push_back(9);  //   5     8
   v.push_back(10); //   6     8
   v.push_back(11); //   7     8
   v.push_back(12); //   8     8

   v.push_back(9);  //   9    16
   v.push_back(10); //   10   16
   v.push_back(11); //   11   16
   v.push_back(12); //   12   16

  cout<<"Size is --> "<<v.size();
  cout<<endl;
  cout<<"Capacity is --> "<<v.capacity();

   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();

   cout<<endl;

  cout<<"Size is --> "<<v.size();
  cout<<endl;
  cout<<"Capacity is --> "<<v.capacity();
// Capacity is same but size is change

}