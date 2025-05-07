#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> threesum(vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int i = 0;

    for (; i < nums.size() - 2; i++)
    {

        if (i && nums[i] == nums[i - 1])
            continue;
        int k = nums.size() - 1, j = i + 1;
        int sum = nums[i] + nums[j] + nums[k];
       
        if (sum == 0)
        { vector<int> temp{nums[i], nums[j], nums[k]};
            while (j < k && nums[j] == nums[j + 1])
                j++;

            while (j < k && nums[k] == nums[k - 1])
                k--;

            ans.push_back(temp);
            j++;
            k--;
        }
        if (sum < 0)
        {
            j++;
        }
        else if (sum > 0)
        {

            k--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threesum(nums);
    for (const auto &triplet : result)
    {
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}