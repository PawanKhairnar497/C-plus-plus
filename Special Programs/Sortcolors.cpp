// sort the arrays of 0's , 1's and 2's
#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums) {
        // Two pass solution
        int n = nums.size();
        int noz = 0;
        int noo = 0;
        int notw = 0;
         for(int i=0;i<n;i++){
            if(nums[i] == 0) noz++;
            else if(nums[i] == 1) noo++;
            else  notw++;
         }
          //Fill
         for(int i=0;i<n;i++){
            if(i<noz) nums[i] = 0;
            else if(i<(noz+noo))nums[i] = 1;    
            else nums[i] = 2;
         }
}
int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);

 for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

sortColors(nums);
 for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}