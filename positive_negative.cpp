#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    //1 -2 3 -4 -5 6 8

    int st=0;
    int lt=v.size()-1;

    while(st<lt)
    {
        if(v[st]>0 && v[lt]<0)
        { swap(v[st],v[lt]);
        st++;
        lt--;
        }
        if(v[st]<0) st++;
        if(v[lt]>0) lt--;
    }  

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }  

}

