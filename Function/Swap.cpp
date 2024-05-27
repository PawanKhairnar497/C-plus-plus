#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
// This called pass by value but not by reference 
int main(){
    int a,b;
    cout<<"Enter the two numbers:- ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
// This called pass by value but not by reference 
}    
// Enter the two numbers:- 10 20
// 10 20