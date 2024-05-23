#include<iostream>
using namespace std;
int main(){
    
    int a,b;
    char ari;
    cout<<"Enter the problem :- ";
    cin>>a>>ari>>b;

    switch(ari){
        case '+':
            cout<<"Addition of a & b is "<<a+b;
            break;
        case '-':
            cout<<"Substraction of a & b is "<<a-b;
            break;
        case '*':
            cout<<"Multiplication of a & b is "<<a*b;
            break;
        case '/':
            cout<<"Division of a & b is "<<a/b;
            break;
        case '%':
            cout<<"Modulus of a & b is "<<a%b;        
    }


return 0;    
}