#include <iostream>
#include <vector>
using namespace std;

void Duplicate(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl
         << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }
    cout << "The duplicate elements int the array are: " << endl;
    Duplicate(arr, 5);
    // cout << ans;
    return 0;
}