#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Stack{
    queue<int>q;
public:
void push(int x){
    int size=q.size();
    q.push(x);
    for(int i=0;i<size;i++){
        q.push(q.front());
        q.pop();

    }

}
void pop(){
if(q.empty()){
    cout<<"stack is empty"<<endl;
    return;
}
q.pop();
}
int top(){
    if(q.empty()){
        cout<<"Stack is empty"<<endl;
        return -1;

    }
    return q.front();
}
bool empty(){
    return q.empty();
}


};
int main()
{
    Stack st;

    st.push(30);
    st.push(25);
    cout<<st.top();



    return 0;
}