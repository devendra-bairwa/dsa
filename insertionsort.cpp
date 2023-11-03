#include<iostream>
using namespace std;

void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
            
        }
    }

      cout<<"sorted array is : "<<endl;

    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main(){
    
    int n;
    int arr[n];

    cout<<"enter the size :"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"unsorted array is : "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

// int arr[]={5,4,6,1,3,2};
// int n=6;
   insertionsort(arr,n);

    return 0;
    
}