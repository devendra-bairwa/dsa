#include<iostream>
using namespace std;
// int greet(int n)
// {   if(n==0) return 0;
//     cout<<"good morning"<<endl;
//     greet(n-1);
    
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<greet(n);
//     return 0;
// }

int fact(int n)
{
    if(n==1 || n==0) return 1;
    int ans=n*fact(n-1);
    return ans;

    
    
}

int main()
{
    int n=5;
   // cin>>n;
    cout<<fact(n);
}