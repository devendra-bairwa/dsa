#include <iostream>
#include<vector>
using namespace std;

 int subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int sum=0;
        for(int i=0;i<n;i++)
        {
            while(sum<=s)
            {
                for(int j=i;j<n;j++)
                {
                    sum=sum+arr[j];
                    if(sum==s)
                    {
                        cout<<i<<" "<<j;
                        return 0;
                    } 
                    if(sum>s) break;
                }
            }
        }
        return {-1};
    }

int main()
{

  int Ar[] = {1,2,3,7,5};
  int n=5;
  long long s=12;

cout<<subarraySum(Ar,n,s);
   
}