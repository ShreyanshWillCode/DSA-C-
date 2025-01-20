#include <iostream>
using namespace std;

void selection(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;
            } /* code */
        }

        swap(arr[minindex], arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {2,0,2,1,1};
    selection(arr, 5);
    return 0;
}