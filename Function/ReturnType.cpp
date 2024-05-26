#include<iostream>
using namespace std;
//     (Argument)
int sum(int x,int y){
      return x+y; // return ends function 
}
int main(){
    // int x = 10;
    // int y = 20;
    int x,y;
    cout<<"Enter the two number:- ";
    cin>>x>>y;
                      //(Argument)
    cout<<"Sum :- "<<sum(x,y)<<endl;
}