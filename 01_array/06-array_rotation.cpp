#include <bits/stdc++.h>
using namespace std;

void  Array_rotation(int arr[] ,int n)
{


 int temp =arr[0];
     for(int i=1;i<n;i++)
    {
      arr[i-1]=arr[i];
    }
    arr[n-1]=temp;


    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
};


int main()
{
   int arr[]={1,2,4,6,7,8};
   int n = sizeof(arr) / sizeof(arr[0]);

   Array_rotation(arr, n);


}