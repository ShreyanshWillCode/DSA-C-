#include <iostream>
#include <vector>
using namespace std;
void Rotate(vector<int> nums, int k)
{

    int i = 0;
    int e = nums.size() - 1;
    int r = nums.size() - k;
    int s=r-1;
    vector<int> temp(nums.size());
    while (i < nums.size() - k && r <= e)
    {
        temp[i++] = nums[r++];
        int j = 0;
        while (s < nums.size() && j < nums.size() - k)
        {
            temp[s++] = nums[j++];
        }
        
    }
    nums = temp;

    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}
 void rotate(vector<int>& nums, int k) {
        int i = 0;
       vector<int> temp(nums.size());
        while (i < nums.size()) {
             temp[(i + k) % nums.size()]=nums[i];
          
            i++;
        }
        nums=temp;
    }
void printArray(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {-1,-100,3,99};
    Rotate(arr, 2);
    printArray(arr);

    return 0;
}