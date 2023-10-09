#include <iostream>
using namespace std;

void merge(int a[], int b[], int res[], int n1, int n2)
{
    int k = 0;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            res[k] = a[i];
            k++;
            i++;
        }
        else
        {
            res[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        res[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        res[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int V[], int n)
{
    if (n == 1)
        return;

    int n1 = n / 2;
    int n2 = n - n1;

    int A[n1];
    int B[n2];

    for (int i = 0; i < n1; i++)
    {
        A[i] = V[i];
    }

    for (int i = 0; i < n2; i++)
    {
        B[i] = V[i + n1];
    }

    mergeSort(A, n1);
    mergeSort(B, n2);

    merge(A, B, V, n1, n2);
}

int main()
{
    int n =6;
    int V[n] ;
     cout << "enter array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    mergeSort(V, n);

    cout << "Sorted array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << V[i] << " ";
    }

    return 0;
}
