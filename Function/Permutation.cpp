#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}

int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int permutation(int n,int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}

int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    int r;
    cout<<"Ener r :- ";
    cin>>r;
    int ncr = combination(n,r);  // function calling
    int npr = permutation(n,r);
    cout<<" "<<ncr<<endl;
    cout<<" "<<npr<<endl;
} 
// Enter n :- 5
// Enter r :- 2
//  10
//  20