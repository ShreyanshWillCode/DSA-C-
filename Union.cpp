#include<iostream>
#include<vector>
using namespace std;
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
     int i=0;
        int j=0;
        int m=nums1.size();
        int n=nums2.size();
        vector<int>Union;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
            if(Union.empty()||Union.back()!=nums1[i])
                Union.push_back(nums1[i]); 
            i++;
         }
            else if(nums2[j]<nums1[i]){
                if(Union.empty()||Union.back()!=nums2[j])
                    Union.push_back(nums2[j]); 
            j++;
            
            }
            else{
            if(Union.empty()||Union.back()!=nums1[i])
                Union.push_back(nums1[i]); 
            i++;
            j++;
            }
        }
            while(i<m){
                if(Union.empty()||Union.back()!=nums1[i])
                    Union.push_back(nums1[i]);
                 i++;
            }
            while(j<n){
                 if(Union.empty()||Union.back()!=nums2[j])
                    Union.push_back(nums2[j]);
                j++;

            }
             return Union;
        }
       
    
int main()
{vector<int>num1={1,2,3,4,5};
vector<int>num2={1,2,7};

vector<int>ans=unionArray(num1,num2);
cout<<"Union of array: ";
for(int i: ans)
{
    cout<<i<<" ";
}
return 0;
}