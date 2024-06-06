#include<iostream>  // 17
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    fact(7);
    cout<<fact(7);
}