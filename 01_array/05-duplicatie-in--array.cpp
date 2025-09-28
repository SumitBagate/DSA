#include <bits/stdc++.h>
using namespace std;

int isDuplicate(int arr[], int n)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    // trverse  the  set
    for (auto &it : st)
    {
        arr[index] = it;
        index++;
    }
    return index;
}



int removeDuplicate(int *arr,int n)
{

}


int main()
{
    int arr[] = {1, 2, 4, 5, 5, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    isDuplicate(arr, n);
    int newSize = isDuplicate(arr, n);
     cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}