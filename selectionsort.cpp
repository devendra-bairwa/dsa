#include<iostream>
#include<climits>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int j;
        int min=INT_MAX;
        int index=j;

        for(j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                index=j;
            }

        }
        swap(arr[i],arr[index]);
    }


    cout<<"sorted array is : "<<endl;

    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }

}


int main()
{
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

    selectionsort(arr,n);
    
    return 0;

}