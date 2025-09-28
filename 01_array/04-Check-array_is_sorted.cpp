#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i]) // If any pair is out of order
        {
            return false;
        }
    }
    return true; // If loop finishes, array is sorted
}

int main()
{
    int arr[] = {1, 2, 4, 8, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n))
        cout << "sorted";
    else
        cout << "not sorted";

    return 0;
}
