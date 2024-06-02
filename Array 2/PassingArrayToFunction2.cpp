#include<iostream>  // 2
using namespace std;
// void display(int *a,int size) // using pointer
void display(int a[],int size){
    for(int i=0;i<=size-1;i++){
    cout<<a[i]<<" ";
    } 
    cout<<endl;
    return ;
}

void change(int b[],int size){
    b[0] = 100;
}

int main(){
    int arr[5] = {20,30,579,20,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // accessing elements of array in another function
    // updation , pass by value / reference ? -->  pass by reference
    display(arr,size);
    change(arr,size);
    display(arr,size);
}