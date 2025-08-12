#include <iostream>
using namespace std;

void Recursive_Bubble_sort(int arr)
{
}

int main()
{
    const int N = 6;
    int arr[N];

    for (int i = 0; i < N; i++)

    {
        cin >> arr[i];
    };

    Recursive_Bubble_sort(arr);

    for (int i = 0; i < N; i++)

    {
        cout << arr[i] << " ";
    };

    return 0;
}