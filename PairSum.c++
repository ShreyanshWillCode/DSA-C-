#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int PairSum(int arr[], int size, int sum)
{

    sort(arr, arr + size);
    // cout << "Sorted Array: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    //     /* code */
    // }
    // cout << endl;
    // cout << "{ ";
    vector<pair<int, int>> found;
    int i = 0, j = size - 1;
    while (i < j)
    {
        int ans = arr[i] + arr[j];
        if (ans == sum)
        {

            found.emplace_back(make_pair(arr[i], arr[j]));

            i++;
            j--;
        }
        else if (ans < sum)
        {
            i++;
            /* code */
        }
        else
        {
            j--;
            /* code */
        }
        
     
    }
   
    
    for (const auto &pair : found)
        {
        //    if (pair.first==arr[i]||pair.second==arr[j])
        //    {
        //     break;
        //    }
           
           
            cout << pair.first <<","<< pair.second<<" ";
        }
return found;
   
}

int main()
{
    int arr[5] ={5, 5, 5, 5, 5};
    PairSum(arr, 5, 10);

    return 0;
}