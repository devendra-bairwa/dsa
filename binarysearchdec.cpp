#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    int arr[n];
    cout << "enter the array element (decreasing)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int tgt;
    cout << "enter the element to be searched :" << endl;

    cin >> tgt;

    int st = 0;
    int lt = n - 1;
    int mid;
bool flag=false;
    while (st <= lt)
    {
         mid = (st + lt) / 2;

    if (arr[mid] == tgt)
    {
        cout << mid << endl;
        flag=true;
        break;
    }
    else if (arr[mid]>tgt)
    {
        st=mid+1;
    }
    else lt=mid-1;


    }

    if(flag==false)
    {
        cout<<-1;
    }
       
        return 0;
}