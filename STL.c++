#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> arr = {1, 2, 3, 4};
    for (int i = 0; i < arr.size(); i++)
    {
        cout
            << arr[i] << endl;
    }
    cout<<"Element at 2 index:"<<arr.at(2)<<endl;
if (arr.empty()==true)
{
    cout<<"Array is empty";
}
else 
cout<<"array is not empty";

    return 0;
}