//  1  -2   3  -4   5   6   8 
//  1   8   3   6   5  -4  -2 
// -2  -4   3   6   5   8   1 

#include <iostream>
using namespace std;

/*void swap(int arr1[],int arr2[])
{
    int temp=arr1[i];
    arr1[i]=arr2[j];
    arr2[j]=temp;
}*/
void posneg(int arr[], int n)

{
    int i = 0, j = n - 1;

    while (i < j)
    {

        // if (i == j)
        // {
        //     break;
        // }

       

        if (arr[i] > 0)
        {
            i++;
        }

        if (arr[j] < 0)
        {
            j--;
        }
        if (arr[i] < 0 && arr[j] > 0)
        {
            swap(arr[i], arr[j]);

            i++;
            j--;
        }
    }
}

void sortdec(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i = -1;
        }
    }
}

void negpos(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] > 0 && arr[j] < 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[j] > 0)
        {
            j--;
        }
        else if (arr[i] < 0)
        {
            i++;
        }
    }
}

void sortinc(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i = -1;
        }
    }
}

int main()
{
    int arr[] = {1,-2,3,-4,5,6,8};
    int n = sizeof(arr) / sizeof(int);
    // cout<<size(arr)<<endl;  7
    // n=7
    cout << "array before sorting: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "array sorting from positive to negative:";
    posneg(arr, n);

    //  sortdec(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
     cout << "array sorting from negative to positive: ";

      negpos(arr, n);
      // sortinc(arr, n);

      for (int i = 0; i < n; i++)
      {
          cout << arr[i] << " ";
      }
  
    return 0;
}