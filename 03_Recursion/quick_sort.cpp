#include<iostream>
using namespace std;

int part_ind(int arr[], int low, int high) {

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(int arr[], int n, int low, int high) {

    if (low < high) {
        int pi = part_ind(arr, low, high);
        quick_sort(arr, n, low, pi - 1);
        quick_sort(arr, n, pi + 1, high);
    }
}

int main() {
    int arr[] = {5, 8, 4, 3, 9, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = n - 1;

    quick_sort(arr, n, low, high);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}



// #include<iostream>
// using namespace std;

//  int  part_ind(int arr[], int low , int  high){

//      int  pivot =arr[low];
//      int i=low;
//      int j=high;

//      while( i<j)
//      {
//         while ( arr[i]<=pivot && i<=high)
//         {
//           i++;
//         }
//         while( arr[j]>=pivot&& j>=low)
//         {
//             j--;
//             if(i<j)
//             {
//               swap( arr[i],arr[j]);
//             }
//         }
//         swap(arr[low],arr[j]);
//         return j;
//      }

     
 

//  }

// void  quick_sort(int arr[],int n , int low , int  high){
       
//     if( low < high)
//     {    
//         int pi=  part_ind(arr, low ,high);
//         part_ind(arr,n, low ,pi-1 );
//         part_ind(arr,n, pi+1 ,high );
//     }
    
    
// }


// int main()
// { 
//     int arr[]= { 5 ,8,4,3,9,7,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//    int low = 0;

//     int high = n-1;
//     quick_sort(arr,n, low ,high);
//     for( int i =0 ;i<n;i++)
//     {
//         cout<<arr[i];
//     }
//     return 0;
// }