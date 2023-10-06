#include<iostream>
using namespace std;
int main()
{
    string  str;
    getline(cin,str);

   int s=str.length();
   int count=0;

    for(int i=0; i<s;i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
            count++;
        }
    }

    cout<<count;
    return 0;
    
}