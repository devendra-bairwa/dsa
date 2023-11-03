#include<iostream>
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
    q.pop();//10
    display(q);//20 30 40 50 
     cout<<endl;
    cout<< q.back();//50
    cout<<endl;

}