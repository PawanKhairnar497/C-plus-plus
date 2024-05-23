#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=1;i<=100;i+=2){
        if(i%2==0)  continue; // continue skip the condition
        cout<<i<<endl;
    }
}