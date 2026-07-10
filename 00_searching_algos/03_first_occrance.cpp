#include<iostream>
#include<vector>
using namespace std;

int First_occar( vector<int>&arr,int n , int x)
{
   int  low = 0;
   int  high  = n-1;
   int   first = -1;

   while (low <= high)
   {
     int mid = (low + high) / 2;
     
     if(arr[mid] == x){
        first = mid;
        high =  mid-1 ;
     }

     else if(arr[mid] < x){
      low = mid +1;
     }

     else {
        high =  mid -1;
    }

   }

     return first;
 }



int Last_occar( vector<int>&arr,int n , int x)
{
    int  low = 0;
    int high = n-1;
    int last = -1;

    while (low<= high)
    {
        int mid  = (low + high) /2;

        if( arr[mid] == x){
            last = mid;
            low = mid+1;
        }

        else if(arr[mid] < x){
            low = mid+1;
        }

        else{
            high = mid-1;
        }

    }
        return last ;
}


int main()
{   
    int a;
    cout<<"enter array size:-\n";
    cin>> a ;
    vector<int>arr(a);

    for(int i = 0 ;i < a; i++){
      cout<< i << "Enter arr nmbers:-\n";
      cin >> arr[i];
      arr.push_back(i);
    }

    for(int i = 0 ;i< a; i++){
      cout <<arr[i];
    }

    
    // arr = {2, 4, 6, 8, 8, 8, 11, 13 };



    int x;
    cout<<"enter target from array :-";
    cin >> x;


    int choice;
    cout<< "1. first occur\n";
    cout<< "2. last occur\n";
    cout<< " select your choice\n";
    cin >> choice;
    
    int result;

    switch (choice)
    {
    case 1:
        result = First_occar(arr,a,x);
        cout<<"First Occurence"<<result<<endl; 
        break;
    case 2:
        result = First_occar(arr,a,x);
        cout<<"Last Occurence"<<result<<endl;
        break;
    default:
        cout << "Invalid choice " << endl;
        break;
    }
    
    cout <<result;


    return  0;
}