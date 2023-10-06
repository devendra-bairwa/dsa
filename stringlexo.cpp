#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void isanagram(string str1)
{
    sort(str1.begin(),str1.end());
    cout<<str1;
    
    //cout<< str1.end();


}
int main()
{
    string str="i am an pwian";
    

   isanagram(str);
       return 0;
    
}