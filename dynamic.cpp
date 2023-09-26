#include<iostream>
#include<vector>
using namespace std;
int main()
{

int size;
    cout<<"enter the size of arr";
    cin>>size;
    vector <int> arr;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }


    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
    
}