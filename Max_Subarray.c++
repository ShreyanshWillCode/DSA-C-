#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

double findMaxAverage(vector<int> &nums, int k)
{
    // Initialize sum with first k elements
    double sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }

    // Initialize maxSum with the sum of first window
    double maxSum = sum;

    // Slide the window
    for (int i = k; i < nums.size(); i++)
    {
        sum = sum + nums[i] - nums[i - k];
        maxSum = max(maxSum, sum);
    }
    cout << "maxsum" << maxSum << endl;
    // Return maximum average
    return maxSum / k;
}
long long maximumSubarraySum(vector<int> &nums, int k)
{
    long long sum = 0;
    long long maxsum = 0;
    unordered_map<int, int> count; // Track frequency of elements

    // First window
    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
        count[nums[i]]++;
    }
    if (count.size() == k)
        maxsum = sum;

    // Slide window
    for (int i = k; i < nums.size(); i++)
    {
        // Remove previous element
        count[nums[i - k]]--;
        if (count[nums[i - k]] == 0)
        {
            count.erase(nums[i - k]);
        }
        sum -= nums[i - k];

        // Add new element
        sum += nums[i];
        count[nums[i]]++;

        // Update maxsum if all elements are distinct
        if (count.size() == k)
        {
            maxsum = max(maxsum, sum);
        }
    }

    return maxsum;
}
int main()
{
    vector<int> nums = {9, 9, 9, 1, 2, 3};
    int k = 3;
    cout << maximumSubarraySum(nums, k);

    return 0;
}