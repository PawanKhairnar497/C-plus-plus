#include<iostream>  // 3
using namespace std;
int main(){
 // If the marks of any students is less than 35 print its roll number.   
    int marks[6];
    cout<<"Enter the marks of 6 students :- "<<endl;
    
    // Input
    for(int i=0;i<=5;i++){
        cin>>marks[i];
    }

    //Output
    for(int i=0;i<=5;i++){
        if(marks[i]<35) cout<<i<<" ";
    }

return 0;
}