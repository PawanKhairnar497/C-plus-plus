#include<iostream>  //4
using namespace std;
int main(){ 

    int n;
    cout<<"Enter the number of students :- ";
    cin>>n;

    int marks[n];
    cout<<"Enter the marks:- ";

    //Input
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }

    //Output
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35)  cout<<i<<" ";
    }


}