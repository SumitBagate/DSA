#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // hashing:
    const int HASH_SIZE = 100; // Increased from 13 to 100
    int hash[HASH_SIZE] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        -cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }

    return 0;
}