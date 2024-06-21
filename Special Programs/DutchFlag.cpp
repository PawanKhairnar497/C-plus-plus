// Sort the array of 0's , 1's and 2's
#include<iostream>
#include<vector>
using namespace std;
void SortColors(vector<int> &nums){
     // One pass solution
     int lo = 0;
     int mid = 0;
     int hi = nums.size() - 1;

   while(mid<=hi){
    if(nums[mid] == 2){
        int temp = nums[mid];
        nums[mid] = nums[hi];
        nums[hi] = temp;
        hi--;
    }
        else if(nums[mid] == 0 ){
           int temp = nums[mid];
           nums[mid] = nums[lo];
           nums[lo] = temp;
           lo++;
           mid++;
        }
    else mid++;    
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

SortColors(nums);
 for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

}