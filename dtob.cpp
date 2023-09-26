#include<iostream>
using namespace std;

int main()
{
    int n,i=0;
    int arr[15];

    cout<<"enter a decimal number:"<<endl;
    cin>>n;


    do
    {
       arr[i]=n%2;
       n=n/2;
       i++;
    }while(n!=0);

   for(i=10;i>=0;i--)
   {
    cout<<arr[i];
   }

    return 0;



}