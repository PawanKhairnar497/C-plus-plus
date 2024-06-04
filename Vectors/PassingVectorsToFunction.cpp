#include<iostream> // 8
#include<vector>
using namespace std;

// void change(vecotr<int> &a)  // pass by reference
void change(vector<int> a){
  a[0] = 100;
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;  // 100 10 11 12
}

int main(){  

      vector<int> v;

    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
   
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;  // 9 10 11 12

// vector are passer by value. Each time you pass , new vector is created
   change(v); 
   for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
    }
   cout<<endl;  // 9 10 11 12

}