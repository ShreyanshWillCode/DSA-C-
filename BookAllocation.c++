#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int m, int mid)
{
    int StudCount = 1;
    int Pagesum = 0;
    for (int i = 0; i < n; i++)
    {

        if (Pagesum + arr[i] <= mid)
        {
            Pagesum += arr[i];
        }
        else
        {
            StudCount++;
            if (StudCount > m || arr[i] > mid)
            {
                return false;
            }
            Pagesum = arr[i];
        }
    }
    return true;
}

int bookAllocate(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[4] = {10, 20, 30, 40};

    int ans = bookAllocate(arr, 4, 2);
    cout << ans << endl;
    return 0;
}