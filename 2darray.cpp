#include<iostream>
using namespace std;
int main()
{
    int m=2,n=3;
    int arr[m][n];
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}

for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

cout<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}

return 0;
}