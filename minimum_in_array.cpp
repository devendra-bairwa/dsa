//minimum_in_array
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

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int mini=INT32_MAX;

    for(int i=0;i<n;i++)
    {
       if(arr[i]<mini)
       {
        mini=arr[i];
       }
    }
cout<<endl;
    cout<<mini;
    return 0;

}