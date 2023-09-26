#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    int old=n;

int newval=0;
    while(n>0)
    {
        int l=n%10;
        
        newval=(l*l*l)+newval;
        
        n=n/10;

    }

    if(newval==old)
    {
        cout<<old<<" is a amstrong number"<<endl;
    }
    else{
        cout<<"it is not an amstrong number"<<endl;
    }

return 0;
 }