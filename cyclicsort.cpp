#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int i=0;
    while(i<n)
    {
        int index=arr[i]-1;
        if(i==index) i++;
        else 
        {
            swap(arr[i],arr[index]);
        }
    }

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}