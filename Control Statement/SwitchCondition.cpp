#include<iostream>
using namespace std;
int main(){
    int x;  
    cout<<" Enter Month Number:-  ";
    cin>>x;
    // 1 , 3 , 5 , 7 , 8 , 10 , 12    ---> 31 Days
   //  4 , 6 , 9 , 11    ---> 30 Days
   // 2  ->  28 Days

  switch((x<=7 && x%2!=0) ||(x>=8 && x%2==0)){
      case 1:
        cout<<" 31 ";
  } 

  switch(x==4 || x==6 || x==9 || x==11){
       case 1:
        cout<<" 30 ";
  }

  switch(x){
    case 2:
    cout<<" 28 ";
  }

  switch(x>12){
    case 1:
    cout<<" Invalid Number choose between 1 to 12 ";
  }

return 0;
}


