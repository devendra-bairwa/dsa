//3_largest_in_array
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n=8,arr[n]={7,0,1,5,4,76,99,-65};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }

    //array_2nd_largest

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int first=INT32_MIN,second=INT32_MIN,third=INT32_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>first )
        {   third=second;
            second=first;
            first=arr[i];
        }
        else if(first!=second && arr[i]>second)
        {   
            third=second;
           second=arr[i];
        }
         else if(arr[i]>third && third!=second && third!=first)

        {   
            third=arr[i];
        }
    }
cout<<endl;
    cout<<first<<" "<<second<<" "<<third;
    return 0;

}