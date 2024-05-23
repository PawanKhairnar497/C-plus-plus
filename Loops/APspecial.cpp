#include<iostream>
using namespace std;
int main(){
   // 100 97 94 .... 7 4 1 --> 34 terms
     int i;
     int a = 100;
     for(i=1;i<=34;i++)  // for(i=1;a>0;i++)
      //for(int i=100;a>0;a=a-3)
     {
        cout<<a<<endl;
        a = a - 3;
     }
return 0;
}     