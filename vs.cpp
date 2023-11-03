#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  
vector<int> findTwoElement(vector<int> arr, int n) {
	vector<int> arr2;
   sort(arr.begin(), arr.end());
   for(int i=1;i<n;i++)
   {
	if(i!=arr[i])
	{
		return {i,arr[i]};
	}
   }
    }

int main()
{   int n=3;
  int Arr[n] = {1, 3, 3}; 
	cout<< findTwoElement(Arr,n);
}