#include<iostream> // 5
#include<vector>
using namespace std;
int main(){

    vector<int>v(5,7); // Initialize size --> 5 , each element has value 7
    cout<<v[4];

    // cout<<v.size(); //  5
    // cout<<v.capacity(); // 5
}