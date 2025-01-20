#include <iostream>
using namespace std;
void reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int lengthchar(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
        /* code */
    }
    return count;
}
int main()
{
    char name[20];
    cin >> name;
    cout << name << endl;
    cout << lengthchar(name) << endl;
    cout << "Reverse: " << endl;
    reverseString(name, lengthchar(name));
    cout << name << endl;+
    
    return 0;
}