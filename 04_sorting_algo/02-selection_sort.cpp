#include<iostream>
using  namespace std;

int main()
{ int N=6;
  int  arr[]={13,46,24,52,20,9};

  for(int i =0; i<N-1;i++)
  { 
    int mini=i;
   
    for(int j=i+1;j<N;j++)
    { 
        if(arr[j]<arr[i])
        {
            mini=j;
        }
    }
   
    int temp =arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;
  }
  
  
  cout << "After selection sort: " << "\n";
  for (int i = 0; i < N; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

    return 0;
}