#include<iostream>
using namespace std;
//     (Actual argument)
int sum(int x,int y){
      return x+y;
}
int main(){
    // int x = 10;
    // int y = 20;
    int x,y;
    cout<<"Enter the two number:- ";
    cin>>x>>y;
                      //(Formal parameter)
    cout<<"Sum :- "<<sum(x,y)<<endl;
}