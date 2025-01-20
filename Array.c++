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

int main()
{
    int num[15];
    cout << "Value at 0 Index " << num[0] << endl;

    int arr1[3] = {2, 7, 11};
    cout << "Value at 2 index: " << arr1[2] << endl;
    cout << endl
         << "Fine" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] << endl;
    }

    int arr2[4] = {2, 3, 4, 5};
    printArray(arr2, 4);
    return 0;
}