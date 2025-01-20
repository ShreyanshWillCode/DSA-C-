#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing  the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
    cout << "Printing done" << endl;
}
void alterswap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
            /* code */
        }

        /* code */
    }
}
int main()
{
    int arr[5] = {3, 4, 9, 0, 2};
    alterswap(arr, 5);
    printArray(arr, 5);
    return 0;
}