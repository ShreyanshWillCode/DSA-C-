#include <iostream>
#include <algorithm>
using namespace std;

void Intersection(int arr1[], int arr2[], int size1, int size2)
{
    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] < arr2[j])
            {
                break; /* code */
            }
            if (arr1[i] > arr2[j])
            {
                j++;
            }

            if (arr1[i] == arr1[i + 1] && arr2[j] == arr2[j + 1])
            {
                arr1[i] = -123;
                arr2[j + 1] = -214;
            }

            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";

                arr2[j] = -12332;

                break;
            }
        }
    }
}

int main()
{
    int arr1[5] = {1, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};
    Intersection(arr1, arr2, 5, 4);
    return 0;
}