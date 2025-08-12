#include <iostream>
using namespace std;
void Recursive_bubble_sort(int arr[], int N)
{
    if(N==1) return ;
    
    for (int j = 0; j < N; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            //------swap----------
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    Recursive_bubble_sort(arr,N-1);
}
int main()
{
    const int N = 6;
    int arr[N];

    for (int i = 0; i < N; i++)

    {
        cin >> arr[i];
    };

    Recursive_bubble_sort(arr, N);
   for (int i = 0; i < N; i++)

    {
        cout<< arr[i]<<" ";
    };

    return 0;
}