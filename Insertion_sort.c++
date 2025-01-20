#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
int j = i - 1;
        int temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j+1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{

    int arr[7]={10,1,7,4,8,2,11};
    
    insertion(arr,7);
    return 0;
}