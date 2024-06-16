#include<iostream> // 4
// write a program to copy the contents of one array into another in the reverse order 
// Reverse Array Using Pointer
#include<vector>
#include<algorithm>
using namespace std;

// to print element
void display(vector<int> &a){
    for( int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

void reverse(vector<int>&v){
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
    }
    return;
}

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    display(v);

  // Vectors inbuilt function to reverse
 reverse(v.begin(),v.end());
 display(v); // 6 5 4 3 2 1

// alternate reverse ( you can select specific element to reverse)
   reversePart(0,4,v);
   display(v);

}