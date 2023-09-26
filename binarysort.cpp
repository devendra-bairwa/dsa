#include<iostream>
using namespace std;
/*
//binary sort
int binarysearch(int arr[],int size,int key)
{
    int left=0,right=size-1;
    int mid=left+(right-left)/2;

    while(left<=right)
    {
        if(key==arr[mid])
        {
            return mid;
        }

         if(arr[mid]>key)
        {
            right=mid-1;
        }

        else 
        {
            left=mid+1;
        }

        mid=mid=left+(right-left)/2;
    }
    return mid -1;
}

int main()
{
    int arr[5]={3,5,9,13,27};
    int key=27;
int size=sizeof(arr)/sizeof(int);

    cout<<binarysearch(arr,size,key);
}


*/

/* 0 0 1 1 2 2 2 2 
    first and last occrance -->2
     ==4,7
     
*/

int multiply(int a = 10, int b)
{
 return a * b; // If multiply() is called with one parameter, the
} 
int main()
{
    
    cout<<multiply();
}