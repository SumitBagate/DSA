#include<iostream>
#include<vector>
using namespace std;

// int lowerBound(vector<int>&nums,int a, int x)
// {
  
//     int  low = 0;
//     int   high  =   a-1 ;
//     int ans = a;

//     while( low <= high )
//     {
//         int mid = (low + high) /2 ;

//         if( nums[mid] >= x)
//         {
//             ans = mid ;
//             high = mid -1;
//         }
//         else 
//         {
//             low =  mid +  1;
//         }
    
//     }
    
//     return  ans;
// }
   

int  Upper_bound(vector<int>&nums ,int a,int x)
{
    int low =0 ;
    int  high = a-1;
    int ans = a;
    while( low <= high )
    {
        int mid = (low + high)/2;
        if( nums[mid] > x )
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;

}
int main()
{   
    int x ;
    cin >> x ;
    vector<int>arr;
    arr = { 2, 3, 4, 10, 10 ,40 };
    int a =arr.size();
    //  int result =  lowerBound(arr,a,x);  
     int result =  Upper_bound(arr,a,x);
    // int result =  Binary_search(arr,a,x);
    if(result == -1 ) 
       cout<<"not present ";
    else cout << "present  at " << result ;

    return  0;
}