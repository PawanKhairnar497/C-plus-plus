#include<iostream> // 7
#include<vector>
#include<algorithm>
using namespace std;
int main(){
      vector<int> v;
    v.push_back(99);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);

   //cout<<v[3];  // 12
// x - - - - - x - - - - - - -  - - - - - x

// at 
    // cout<<v.at(3);  // 12

   // v.at(3)= 497;
   // cout<<v.at(3);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
// x - - - - - x - - - - - - -  - - - - - x

// sort
    sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
     }

}