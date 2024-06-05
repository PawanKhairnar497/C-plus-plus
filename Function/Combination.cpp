#include<iostream> // 6
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    int r;
    cout<<"Ener r :- ";
    cin>>r;
                 
    // int nfact = 1 ;  // n!
    // for(int i=1;i<=n;i++){
    //     nfact *= i;
    // }

    // int rfact = 1;  // r!
    // for(int i=1;i<=r;i++){
    //     rfact *= i;
    // }

    // int nrfact = 1;  // nr!
    // for(int i=1;i<=n-r;i++){
    //     nrfact *= i;
    // }
    int nfact = fact(n);     //(5)
    int rfact = fact(r);     //(2)
    int nrfact = fact(n-r);  //(5-2) --> (3)
    int ncr = nfact/(rfact*nrfact);  // 120/2*6 -> 120/12  --> 10
    cout<<" "<<ncr;

return 0;
}
// Enter n :- 5
// Enter r :- 2
//  10