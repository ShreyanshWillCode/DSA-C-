#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> arr, int point)
{

    int s = point+1;
    
    int e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr.at(s), arr.at(e));
        s++;
        e--;
    }
    for (int i : arr)
    {
        cout << i << " " << endl;
    }
}

int main()
{
    vector<int> array = {1,2,3,4,5,6};
    reverseArray(array, 3);
    return 0;
}