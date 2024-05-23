#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter a number:- ";
    cin>>n;
    bool flag = true ;  // true means prime 
    for(i=2;i<=n-1;i++){   // i is a factor fo n
        if(n%i==0){
            flag = false; //False means composite
            break;  // break won't print multiple output
        }
    }
     if(n==1) cout<<"1 is neither prime nor composite";
     else if(flag==true) cout<<n<<" is a prime number";  // It is divisible by 1 & itself
     else cout<<n<<" is a composite number";  //Composite means the number has multiple factors
     
return 0;
}
