#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    cout << num << endl;
    cout << "address of num is ->" << &num << endl;
    int *ptr = &num;
    cout << "Value of pointer-->" << *ptr << endl;
    int arr[10] = {2, 4, 5, 6, 7};
    cout << "address of first element: " << arr << endl;
    cout << "address of first element: " << &arr << endl;
    cout << "value of first element using pointer: 1st->" << *arr << endl;
    cout << "address of first element using and operator: 1st->" << &arr[0] << endl;
    cout << "value of second element using and operator: 2nd->" << *(arr+1) << endl;
    ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;

    //char
    char ch[10]="abcdefg";
    cout<<ch<<endl;
    char *c=&ch[0];
    //prints entire string 
    cout<<"address of char -->"<<c<<endl;

    return 0;
}