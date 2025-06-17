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
    int *ptr = &second;
    (*ptr)++;
    *ptr=first;
    
    // cout << (*ptr)++ << " " <<endl;
    cout << first << " " << second<<*ptr<<endl;
     return 0;
}