#include<iostream>
using namespace std;


int findpivot(int arr[],int si,int end)
{ 
    // *5* 1 8 2 7 6 3 4 
    
    int pivot=arr[si];
    int count=0;
    for(int i=si+1;i<=end;i++)
    {
        if(arr[i]<=pivot) count++;
    }
    int pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);
     // 7 1 8 2 *5* 6 3 4 

    int i=si;
    int j=end;
     while(i<pivotidx && j>pivotidx)
     {
        if(arr[i]<=arr[pivotidx])
        {i++;} 
        if(arr[j]>arr[pivotidx])
        {
            j--;
        }
        else if(arr[i]>arr[pivotidx] && arr[j]<=arr[pivotidx])
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

     }
      // *4 1 3 2* 5 *6 8 7* 


     return pivotidx;

}


void quicksort(int arr[],int si,int end)
{
    if(si>=end) return ;

    // 5 1 8 2 7 6 3 4

    int pi=findpivot(arr, si, end);
    // *4 1 3 2* 5 *6 8 7*

    quicksort(arr,si,pi-1); //4 1 3 2
                            

    quicksort(arr,pi+1,end);//6 8 7



}

int main()
{
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // 5 1 8 2 7 6 3 4 
    quicksort(arr,0,n-1);
    // 1 2 3 4 5 6 7 8
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}  