#include<iostream> // 9
using namespace std;
int main(){
    // int x = 7;
    // int *ptr = &x;
    // cout<<ptr<<endl; //0x61fe14
    //                      // cout<<*ptr<<endl;  // 7
    // ptr = ptr + 2;
    // cout<<ptr;  // 0x61fe1c

    // Hexadecimal (16) --> 0-1-2-3-4-5-6-7-8-9  a-b-c-d-e-f  

    int x = 4;
    int *ptr = &x;
    cout<<*ptr<<endl;  // 4
    // (ptr)++;  --> wrong
    *ptr = *ptr + 1;
    // (*ptr)++;
    cout<<*ptr<<endl;  // 6422040
}
