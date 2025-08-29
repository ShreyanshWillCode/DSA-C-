#include <iostream>
#include <vector>
#include<limits>
// --- Paste the user-provided Solution class here ---
class Solution
{
private:
    int largestElement(std::vector<int> &nums)
    {
        int size = nums.size();
        // Handle empty vector case to avoid out-of-bounds access
        if (size == 0)
            return -1; // Or throw an exception
        int largest = nums[0];
        for (int i = 1; i < size; i++)
        {
            if (nums[i] > largest)
            {
                largest = nums[i];
            }
        }
        return largest;
    }

public:
    // NOTE: The user's original function has logical errors.
    // See the improved version below for a correct implementation.
    int secondLargestElement(std::vector<int> &nums)
    {
        // your code goes here
        int size = nums.size();
       
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        ;
        for (int current : nums)
        {

            if (current > largest)
            {
                largest = current;
            }
            if (current > secondLargest && current < largest)
            {
                secondLargest = current;
            }
           
        }
        if(secondLargest== INT_MIN){
            return -1;
        }
         return secondLargest;
    }
   

}
;
// --- End of Solution class ---

int main()
{
    // Create an instance of the Solution class
    Solution sol;

    // --- User Input ---
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    // Handle case where array size is less than 2
    if (n < 2)
    {
        std::cout << "Array must have at least two elements to find a second largest." << std::endl;
        return 1;
    }

    std::vector<int> nums(n);
    std::cout << "Enter " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> nums[i];
    }

    // --- Function Call & Output ---
    // Note: The provided `secondLargestElement` function has logical issues.
    // The output from your original code may be incorrect.
    int result = sol.secondLargestElement(nums);

    std::cout << "The second largest element is: " << result << std::endl;

    return 0;
}