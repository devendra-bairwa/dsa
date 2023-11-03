#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n=7,arr[n]={1, 3 ,5, 2, 4, 0, -1};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }

    //array_2nd_largest

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int first=INT32_MIN,second=INT32_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>first )
        { 
          first=arr[i];
        }
        else if(first!=second && arr[i]>second)
        {
           second=arr[i];
        }
    }
cout<<endl;
    cout<<first<<" "<<second;
    return 0;

}