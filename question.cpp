#include<iostream>
using namespace std;

//n=5
/*
101 then 1s 
010 in decimal
and return 1 if n is 0
*/

class comp
{
    public:
    int func(int n)
    {

    
    int mask=0,ans;
   
    int m=n;
if (n==0)
{
    return 1;
}
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m=m>>1;
    }

    ans=(~n)&mask;
return ans;
    }

};

int main()
{
comp q;
cout<<q.func(5);
return 0;
}