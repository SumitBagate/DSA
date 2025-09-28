#include<bits/stdc++.h>
using namespace std;

bool  isSorted(int arr[], n)
{
  for(int i =0 ;i<n ;i++)
  {
    if(arr[i]>arr[i-1])
    {
        return 1 ;
    }
    else{
        return -1;
    }
  }
}


int main()
{ 
 int arr[] ={1,2,4,5,6,7,8};
 int n =8;
 cout<<isSorted(arr, n)
return 0;}
