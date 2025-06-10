#include <iostream>
using namespace std;
int main()
{
    // int i = 5;
    // int *p = &i;
    // int **ptr = &p;
    // cout << endl
    //      << "All Working good" << endl;
    // cout << **ptr << endl;
    int first = 8;
    int second = 18;
    int *ptr = &first;
    // *ptr = 9;
    cout << (*ptr)++ << " " <<endl;
    cout << first << " " <<endl;
     return 0;
}