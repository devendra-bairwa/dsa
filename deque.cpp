#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> q;
    q.push_front(10);
    q.push_front(20);

    q.push_back(90);
    q.push_back(100);

    cout<<  q.size();
    cout<<endl;

    q.pop_back();
    q.pop_front();

    cout<<  q.size();
    cout<<endl;

}
