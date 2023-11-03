////minimum_in_array
#include<iostream>
#include<climits>
using namespace std;

bool is_sorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]) return false;
    }
 return true;
}
int main()
{
    int n=7,arr[n]={1, 3 ,5, 6 ,7, 10,9};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
   
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<is_sorted(arr,n);
    return 0;

}