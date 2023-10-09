#include <iostream>
using namespace std;

void sort(int arr1[], int arr2[], int n1, int n2)
{
    cout << "array 1 before sorting :" << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "array 2 before sorting :" << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }

    int k[n1 + n2];
    int l = 0;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            k[l] = arr1[i];
            l++;
            i++;
        }
        else
        {
            k[l] = arr2[j];
            l++;
            j++;
        }
    }

    if (j == n2)
    {
        while (i < n1)
        {
            k[l] = arr1[i];
            l++;
            i++;
        }
    }

    if (i == n1)
    {
        while (j < n2)
        {
            k[l] = arr2[j];
            l++;
            j++;
        }
    }

    cout << endl;
    cout << "final array after sorting :" << endl;
    for (int i = 0; i < (n1 + n2); i++)
    {
        cout << k[i] << " ";
    }
}


int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];

    cout << "enter array 1 " << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "enter array 2 " << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1, arr2, n1, n2);
}