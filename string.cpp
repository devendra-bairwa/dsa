#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

   int s=str.length();

    for(int i=0; i<s;i++)
    {
        if(i%2 != 0)
        {
            str[i]='#';
        }
    }

    cout<<str;
    return 0;
    
}