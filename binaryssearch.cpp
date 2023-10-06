#include<iostream>
using namespace std;

int search(int n,int arr[],int tgt)
{
     int st=0;
    int lt=n-1;

    int mid;

    while(st<=lt)
    {
        mid=(st+lt)/2;

        
        if(tgt==arr[mid])
        return mid;


        else if(arr[mid]<tgt)
        {
            st=mid+1;

        }

        else
        lt=mid-1;
    }

    return -1;

}
int main()
{
    int n;
     cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

int tgt;
    cout<<"enter the element to be searched :"<<endl;
    
    cin>>tgt;

    cout<<search(n,arr,tgt);

  return 0;
    
}