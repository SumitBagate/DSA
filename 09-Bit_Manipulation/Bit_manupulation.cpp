#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = 7;  
    int ans = 0;
    int ans1 = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
        ans1 = ans1|arr[i];
    }

    cout << "Single number is: " << ans<<endl;;
    cout << "Single number is: " << ans1;

    return 0;
}
