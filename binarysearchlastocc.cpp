#include <iostream>
using namespace std;

int lastoccurrence(int n, int arr[], int tgt)
{
    int st = 0;
    int lt = n - 1;
    int mid;
    int ans = -1; // Initialize ans to -1 (indicating not found initially)

    while (st <= lt)
    {
        mid = st + (lt - st) / 2; // Correct way to calculate mid

        if (arr[mid] == tgt)
        {
            ans = mid; // Update ans to the current index
            st = mid + 1; // Move to the right to find the last occurrence
        }
        else if (tgt > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            lt = mid - 1;
        }
    }

    return ans; // Return the index of the last occurrence (or -1 if not found)
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements (sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int tgt;
    cout << "Enter the element to be searched for: ";
    cin >> tgt;

    int result = lastoccurrence(n, arr, tgt);

    if (result != -1)
    {
        cout << "Last occurrence of " << tgt << " is at index " << result << endl;
    }
    else
    {
        cout << tgt << " not found in the array." << endl;
    }

    return 0;
}
