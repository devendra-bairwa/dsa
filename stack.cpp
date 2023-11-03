#include<iostream>
#include<stack>
using namespace std;

stack <int> st;
stack <int> cp;
void printstack( stack <int> st)
{
    
while(st.size()>0)
{
    cout<<st.top()<<" ";
    st.pop();
}
}
int main()
{
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    //cout<<st.top();
cout<<"st = ";
printstack(st);
cp=st;

cout<<endl;
cout<<"cp = ";
printstack(cp);


while(st.size()>0)
{
    st.pop();
}

 while(cp.size()>0)
{
    int x=cp.top();
    st.push(x);
    cp.pop();
}

// cout<<cp.top()<<endl;
// cout<<st.top()<<endl;

cout<<endl;
cout<<"reverse the stack = ";
printstack(st);
return 0;
}
