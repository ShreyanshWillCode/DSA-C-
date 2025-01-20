#include <iostream>
using namespace std;
int minJumps(int arr[], int n)
{

    int jumps = 0;
    int j = arr[0];
    for (int i = 0; i < n; i+=j)
    {
        
        if (arr[j] != 0)
        {
            /* code */

            i = arr[j] + i;
            jumps++;
        }
        
    }
    return jumps;

    return -1;
}

int main()
{
    int arr[5] = {8 ,3 ,27 ,13 ,13};
    cout << minJumps(arr, 5);
    return 0;
}