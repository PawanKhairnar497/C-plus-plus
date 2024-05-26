#include<iostream>
#include<cmath>  // This library use for mathematical function
using namespace std;
int mini(int x,int y){
    int a;
    if(x<y) a = x;
    else a = y;
    return a; 
}
int main(){
    int x,y;
    cout<<"Enter the two numbers:- ";
    cin>>x>>y;
    cout<<"Minimum :- "<<mini(x,y)<<endl;
    
    // squre root 
    cout<<sqrt(16);
    
}
// Enter the two number:- 50 100
// Minimum :- 50
// 4