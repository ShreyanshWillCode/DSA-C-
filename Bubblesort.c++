#include <iostream>
using namespace std;

void bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }

        }
        
    }
      for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
     int arr[6] = {10,1,7,6,14,9};
    bubble(arr, 6);
    return 0;
}