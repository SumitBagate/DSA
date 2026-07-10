#include<iostream>
#include<vector>
using namespace std;

// int Binary_search(vector<int>& arr, int a, int x)
// {
//     int low = 0;
//     int high = a - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == x)
//         {
//             return mid;
//         }
//         else if (arr[mid] < x)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return -1;
// }
                                                      
//!----------------------recursion--------------------------------------


 int recur(vector<int>& arr, int low, int high, int x)
    
    {
        if (low > high) return -1;

        int mid = (low + high ) / 2;

        if(arr[mid] == x ) return mid ;
        
        else if ( x > arr[mid])
        {
            return recur(arr, mid + 1, high, x);
        }
        else 
        {
            return recur(arr, low, mid - 1, x);
        }
    }

int binary_search(vector<int>&arr , int a, int x)
{  
    int  low = 0;
    int  high = a-1;
    return recur(arr, low, high, x);


}


int main()
{   
    int x ;
    cin >> x ;
    vector<int>arr;
    arr = { 2, 3, 4, 10, 40 };
    int a =arr.size();
     int result =  binary_search(arr,a,x);
    // int result =  Binary_search(arr,a,x);
    if(result == -1 ) 
       cout<<"not present ";
    else cout << "present  at " << result ;

    return  0;
}