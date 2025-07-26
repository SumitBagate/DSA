#include <bits/stdc++.h> 

using namespace std;



//USING POINTERS  METHOD TO  OPTEMIZE SPACE 
//DEFINE TO  POINTERS P1 AND  P2 SWAP THE  DATA  AND INCREMENT THE POINTER  TO 
//INDEX

void print_Array(int  arr[], int n)
{
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }


}


void  reverse_Array(int arr[], int n)
{
  int p1=0, p2=n-1;

  while(p1<p2)
  {
    swap(arr[p1],arr[p2]);
    p1++;
    p2--;
  }
  print_Array(arr,n);


}



int main()
{
   int n = 6;
   int arr[] = { 5, 4, 3, 2, 1,7};
   reverse_Array(arr, n);
   return 0;


}