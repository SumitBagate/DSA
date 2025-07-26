#include<bits/stdc++.h>
using namespace std;
int main()
{    int n=6;
  

    int  arr[]={13,46,24,52,20,9};

    for(int i= n-1 ;i>=1 ;i--)
    {  int didswap=0;
        for(int j =0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1]);
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            didswap=1;

        }
         if(didswap==0)
         {
            break;
         }
    }
      
  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";



return 0;
}