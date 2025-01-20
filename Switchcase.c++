#include<iostream>
using namespace std;
int main(){
    int num=2;
    
    switch (num)
    {
    case 1 /* constant-expression */:cout<<"Frist"<<endl;
        /* code */
        break;
    case 2:cout<<"second"<<endl;
    break;
    default:cout<<"It is default case"<<endl;
        break;
    }


    return 0;
}