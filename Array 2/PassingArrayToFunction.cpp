#include<iostream>  // 1
using namespace std;

void display(int a[]){
    for(int i=0;i<=4;i++){
    cout<<a[i]<<" ";
    } 
    cout<<endl;
    return ;
}

void change(int b[]){
    b[0] = 100;
}

int main(){
    int arr[5] = {20,30,579,20,20};
    // accessing elements of array in another function
    // updation , pass by value / reference ? -->  pass by reference
    display(arr);
    change(arr);
    display(arr);
}
