//duplicate_in_array
#include<iostream>
#include<climits>
using namespace std;

int main()
{
     int n=7,arr[n]={1, 3 ,5, 2, 4,1 , 7};
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }

    for(int i=0;i<n-1;i++)
    {
         for(int j=i+1;j<n;j++)
         {
            if(arr[j]==arr[i]){
                cout<<"duplicated"<<endl;
                break;
                
            } 
         }
    }
    
cout<<endl;
    
    return 0;

}