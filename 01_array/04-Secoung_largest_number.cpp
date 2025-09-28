#include <bits/stdc++.h>
using namespace std;

void bruteForce(vector<int> &nums, int n)
{
    sort(nums.begin(), nums.end());
    int largest = nums[n - 1];
    int secoundlarg = nums[0];

    cout << largest << endl;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < largest)
        {
            secoundlarg = nums[i];
        }
    }
    cout << secoundlarg << endl;
}

// define the  largest and secoundLarg  in the  begin
// time Compl - o(N+N)- O(2N)

void Better(vector<int> &nums, int n)
{
    int largest = nums[0];
    int secoundLarg = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > secoundLarg && nums[i] != largest)
        {
            secoundLarg = nums[i];
        }
    }
    cout << secoundLarg;
}

//-----------------------optimal-------------------

int Seclargest(vector<int> &nums, int n)
{

    int largest = nums[0];
    int secLarge = -1;
 
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < largest)
        {
            secLarge = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > secLarge)
        {
            secLarge = nums[i];
        }
    }
    cout<< secLarge;
};

int secSmall(vector<int>&nums, int n)
{
    int smallest = nums[0];
    int secSmallest = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < smallest)
        {
            secSmallest= smallest;
            smallest = nums[i];
        }
        else if (nums[i] != smallest && nums[i] < secSmallest)
        {
            secSmallest = nums[i];
        }
    }
       if (secSmallest == INT_MAX) // no second smallest
        return -1;

    cout<< secSmallest;
}

// void optimized(vector<int> &nums, int n)
// {

//     int largest = nums[0];
//     int secLarge = -1;

//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i] > largest)
//         {
//             secLarg = largest;
//             largest = a[i];
//         }
//         else if
//     }
// }

int main()
{
    vector<int> nums = {3, 1, 4, 1, 5};
    int n = nums.size();
    // bruteForce(nums, n);
    Better(nums, n);

    Seclargest(nums ,n);
    secSmall(nums ,n);

    return 0;
}