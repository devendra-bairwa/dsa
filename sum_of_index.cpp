
#include<iostream>
#include<climits>
using namespace std;

void sumof(int arr[],int n)
{   
    int sumeven=0,sumodd=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sumeven+=arr[i];
        }
        else sumodd+=arr[i];
    }

    cout<<sumeven<<" "<<sumodd;
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
    sumof(arr,n);
    return 0;

}