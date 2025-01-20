#include <iostream>
using namespace std;

bool isSolution(int arr[], int size, int mid, int partition)
{
    int limit = 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            limit++;
            if (limit > partition || arr[i] > mid)
            {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int Painter(int arr[], int size, int partition)
{

    int start = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isSolution(arr,size,mid,partition))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[4] = {5, 5, 5, 5};
    int ans = Painter(arr, 4, 2);
    cout << ans << endl;

    return 0;
}