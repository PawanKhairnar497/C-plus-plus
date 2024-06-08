#include<iostream> // 11
using namespace std;
int main(){

    //int *ptr;
    // cout<<ptr; --> 0x10

    // int *ptr;
    // cout<<*ptr;

    int *ptr = NULL;  // reserved address
    cout<<ptr;  // 0 
    cout<<endl;

    int *x = NULL;
    cout<<&x;
    cout<<endl;
   
  // '\0' --> NULL character
    char ch = '\0';
    cout<<(int)ch;  // 0
   cout<<endl;

// 0 --> NULL character
   int *a = 0;
   cout<<a;  // 0

}
