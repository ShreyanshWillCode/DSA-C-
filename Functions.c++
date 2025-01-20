#include <iostream>
using namespace std;

// function 1
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
// Function 2
bool isEven(int num)
{
    if (num & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{

    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout << "Answer is : " << ans << endl;

    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "Number is Even" << endl;
        /* code */
    }
    else
    {
        cout << "Number is odd" << endl;
    }

    return 0;
}