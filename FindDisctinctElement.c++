#include <iostream>
using namespace std;
void printDistinct(int arr[], int size)
{
    int point, next;

    for (point = 0; point < size; point++)
    {
        /* code */
        for (next = 0; next < point; next++)

            /* code */

            if (arr[next] == arr[point])

                break;
        /* code */

        if (point == next)
        {
            /* code */

            cout << arr[point] << " ";
        }
        /* code */
    } 
};





int main()
{

    int arr[5] = {2, 3, 4, 4, -9};
    printDistinct(arr, 5);

    return 0;
}