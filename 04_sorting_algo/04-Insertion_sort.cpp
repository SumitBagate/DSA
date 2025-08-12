#include <bits/stdc++.h> 

using namespace std;

int main()
{ int n=6;
  int  arr[]={13,46,24,52,20,9};
    
    for(int i= 0; i<n-1;i++)
    { 
       int  j =i;
      while (j >0 && arr[j-1]>arr[j])
      {swap(arr[j], arr[j - 1]);// int  temp =arr[j-1];
        // arr[j-1]=arr[j];
        // arr[j]=temp;
        j--;
      }
      
   
    }
cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
 
    return 0;

}