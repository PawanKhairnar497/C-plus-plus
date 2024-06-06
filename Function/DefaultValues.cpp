#include<iostream> // 13
using namespace std;
// void f(int x = 7, int y)  --> error
// void f(int x = 7, float y = 4.7)
void f(int x = 7 , int y =  8){
    cout<<x<<" "<<y;
}
int main(){
    //f();       //   7 8
    // f(4,6);   //   4 6
    f(4);
}