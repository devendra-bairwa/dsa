
#include<iostream>
#include<climits>
using namespace std;

bool flag(int arr[],int n)
{
    int i=0;
    int j=n-1;
    int rt=true;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
           return false;
        }
        i++;
        j--;

    }
    
    return true;

}
int main()
{
    int n=3,arr[n]={2,1,3};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<flag(arr,n);
    
    return 0;

}