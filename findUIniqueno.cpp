#include<stdio.h>
#include<vector>
#include <iostream>
using namespace std;
 int singleNumber(vector<int>& nums) {
int n=nums.size();
int xorr=0;
for (int i = 0; i < n; i++)
{
    xorr=xorr^nums[i];
}
return xorr;
}
int main(){
    vector<int>nums={1, 2, 2, 4, 3, 1, 4};
int ans=singleNumber(nums);


   cout<<"ans: "<<ans<<endl;
   return 0;
}