#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
 
     for(int k=0;k<n-1;k++)//no of passes worst case me n-1 pass lagte h
    {
        bool flag=true;

        for(int l=0;l<n-1-k;l++) //traverse and swap 
        {
            if(arr[l]>arr[l+1])
            {
                int temp=arr[l];
                arr[l]=arr[l+1];
                arr[l+1]=temp;
               

                flag=false;//means swaping hui h
            }
            
        }

        if(flag==true)//means swaping nhi hui mtlb k array sort ho chuki h optimise k liye
            {
                break;
            }
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


   bubblesort(arr,n);

    return 0;
    
}