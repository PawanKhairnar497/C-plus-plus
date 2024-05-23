// Write a programme to determine whether the seller has made profit or loss. Also determine how much profit he made or loss he incurred

#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the Cost Price:  ";
    cin>>cp;

    int sp;
    cout<<"Enter the Selling Price:  ";
    cin>>sp;

    if(sp>cp){
        cout<<"Seller has made Profit of "<<sp-cp;
    }
    if(cp>sp){
        cout<<"Seller has made Loss of "<<cp-sp;
    }
    if(sp==cp){
        cout<<"Seller has made No Profit, No Loss";
    }
return 0;    
}