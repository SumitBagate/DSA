#include<iostream>
using namespace std;

void Recursive_insertion_sort(int arr[],int i,int n)
{
 if(i==n) return;
 int  j=i;
 while(j>0&& arr[j]<arr[j-1]){
    //swap
    int temp=arr[j-1];
    arr[j-1]=arr[j];
    arr[j]= temp;
     j--;
 }

  Recursive_insertion_sort(arr,i+1,n);

}





int main()
{
    const int N = 6;
    int arr[N];

    for (int i = 0; i < N; i++)

    {
        cin >> arr[i];
    };

    Recursive_insertion_sort(arr,0, N);
   for (int i = 0; i < N; i++)

    {
        cout<< arr[i]<<" ";
    };

    return 0;
}