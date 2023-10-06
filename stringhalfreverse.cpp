#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);

   int s=str.length();
 

   reverse(str.begin() + s/2,str.end());
   cout<<str;
    return 0;
    
}