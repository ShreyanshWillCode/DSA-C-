#include<iostream>
#include<deque>
using namespace std;
int main()
{deque<int>d={1,2,3,4,5};
for (int i = 0; i < d.size(); i++)
{
    cout<<d[i]<<" ";
}
cout<<endl;
d.push_front(1);

d.push_back(3);
for (int i = 0; i < d.size(); i++)
{
    cout<<d[i]<<" ";
}
cout<<endl;
    return 0;
}