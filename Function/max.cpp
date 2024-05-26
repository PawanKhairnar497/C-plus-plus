#include<iostream>
using namespace std;
int maxthree(int a,int b,int c){
    int max;
    if(a>c && a>b){
        //max = a;
        return a;
    }
    else if(b>a && b>c){
        //max = b;
        return b;
    }
    // else max = c;
 //return max;
     else return c;   
}
int main(){
    int a=10,b=20,c=30;
    cout<<" "<<maxthree(a,b,c);
}