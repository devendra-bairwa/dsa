#include<iostream>
using namespace std;


int main()
{
    int arr[10];

    int i=0;
    for(i=0;i<=10;i++)
    {
        cin>>arr[i];
    }
cout<<"reversed array will be "<<endl;
    for(i=10;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
