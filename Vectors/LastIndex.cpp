#include<iostream> // 9
#include<vector>
using namespace std;  // find the last occurance of x in the array
int main(){

     vector<int> v;
     v.push_back(9);  // first occurance
     v.push_back(20);
     v.push_back(49);
     v.push_back(55);
     v.push_back(78);
     v.push_back(9);  // last occurance 
     v.push_back(5);

    int x = 9;
    int idx = -1;

    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx = i;
    // }
    // cout<<idx;

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx;

}