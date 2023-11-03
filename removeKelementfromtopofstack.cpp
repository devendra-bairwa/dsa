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

void deletefromtop(stack <int>& st,int idx)
{
    
    while(idx>1)
    {
       
        cp.push(st.top());
        st.pop();
        idx--;
         
    }
    
    st.pop();

    while(cp.size()>0)
    {
        st.push(cp.top());
        cp.pop();
    }
}
int main()
{
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    printstack(st);
    cout<<endl;

    deletefromtop(st,3);
    printstack(st);

    return 0;

}