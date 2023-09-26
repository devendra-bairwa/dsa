#include<iostream>
using namespace std;
int main(){
    int i;
    int max=INT_MIN;
    int semax=INT_MIN;
    cout<<"enter size of array";
    int n;
    cin>>n;
    int arr[n];

    cout<<"enter element of array";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<"max is :";

     for( i=0;i<n;i++)
    {
        if(arr[i]>max )
        {
            max=arr[i];
        }
        

    }

    for(i=0;i<n;i++)
    {
        if(arr[i]==max)
        continue;

        if(arr[i]>semax)
        {
            semax=arr[i];
        }
        
    }
    
  /* for( i=0;i<n;i++)
    {
        if(arr[i]>onemax )
        {
            onemax=arr[i];
        }

        if(arr[i]==onemax )
        continue;
        if(arr[i]>twomax)
        {
            twomax=arr[i];
        }


        if(arr[i]==onemax && arr[i]==twomax )
        continue;
        if(arr[i]>threemax)
        {
            threemax=arr[i];
        }
*/
    cout<<max<<" ";
    cout<<semax<<" ";
    

   


    return 0;
}