#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 3, 0, -2, 9};
    int brr[5] = {2, 4, 5, -8, 0};
    reverse(arr, 6);
    reverse(brr, 5);
    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}