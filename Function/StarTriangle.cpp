#include<iostream>
using namespace std;
void StarTriangle(int x){
        for(int i=1;i<=x;i++){
            for(int j=1;j<=i;j++){
                cout<<" * ";
            }
            cout<<endl;
        }
}
int main(){
  StarTriangle(3); // function calling
  cout<<"Hello"<<endl;
  StarTriangle(4);
  cout<<"Hii"<<endl;
  StarTriangle(5);

}