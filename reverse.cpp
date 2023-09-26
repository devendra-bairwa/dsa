#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int num,reverse=0,reminder;
    cout<<"enter number "<<endl;
    cin>>num;
   
    
    while(num!=0)
    {
        reminder=num%10;
        reverse=reverse*10+reminder;
        num=num/10;
    }
    
    cout<<reverse<<endl;
    return 0;   
}