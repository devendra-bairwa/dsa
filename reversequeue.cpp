#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void display(queue<int>q)
{
    int s=q.size();
    for(int i=0;i<s;i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

void reverse(queue<int>& q)
{
    stack<int> st;
    //10 20 30 40 50

    int s=q.size();
    
    while(q.size()!=0)
    {
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()!=0)
    {
        int x=st.top();
        q.push(x);
        st.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);//10 20 30 40 50
    cout<<endl;
    reverse(q);
    display(q);//50 40 30 20 10
    cout<<endl;

}