#include <iostream>
#include <vector>
using namespace std;
void merge(int nums1[], int m, int nums2[], int n, int nums3[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            nums3[k] = nums1[i];
            i = i + 1;
            k++;
        }
        else
        {
            nums3[k] = nums2[j];
            j = j + 1;
            k++;
        }
    }
    while (i < m)
    {
        nums3[k] = nums1[i];
        i++;
        k++;
    }
    while (j < n)
    {
        nums3[k] = nums2[j];
        j++;
        k++;
    }
}
void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    /*/ vector<int>*/ int nums1[6] = {1, 3, 5, 6, 7, 9};
    /*/ vector<int>*/ int nums2[3] = {2, 4, 8};
    /*/ vector<int>*/ int nums3[9];
    merge(nums1, 6, nums2, 3, nums3);
    printArray(nums3, 9);
    return 0;
}