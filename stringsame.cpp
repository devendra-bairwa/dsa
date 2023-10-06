#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool isanagram(string str1,string str2)
{
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(str1.length()!=str2.length())
    {
        return false;
    }

    if(str1==str2)
    {
        return true;
    }
    else 
    return false;
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;

   isanagram(str1,str2)?cout<<"yes":cout<<"no";

    return 0;
    
}