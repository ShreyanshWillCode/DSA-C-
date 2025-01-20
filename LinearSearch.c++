#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
            /* code */
        }

        /* code */
    }
    return 0;
}
int main()
{
    int arr[10] = {5, 7, -3, 6, 10, 22, -2, 8, 9, 21};
    int key;
    cout << "Enter the Key to search: ";
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is absent";
    }

    return 0;
}