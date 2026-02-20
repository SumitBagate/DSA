#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 sumation of N numbers
i-parametrized way
ii-functional way

*/

/*
int sum(int n )
{
    if(n==0)return 0;
    return n +sum(n-1);
}

int main()
{  int n=5;
   cout<< sum(n);
return 0;
}
 */

//~----------------------------factorial--------------------------
/*
int fact(int n )
{
    if(n==0)return 1;
    return n *fact(n-1);
}


int main()
{  int n=5;
   cout<<fact(n);
return 0;
}
 */

//?-----------------------Reverse-Array--------------------------
/*
void  reverse(int i ,int arr[], int n)
{
  if(i>=n/2) return;
  swap(arr[i],arr[n-i-1]);
  reverse( i+1,arr, n);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(0,arr, n);

    for( int i =0 ;i< n ;i++)
    {
       cout<< arr[i]<< " ";
    }

    return 0;
} */

//&----------------------------palindrome(26-1-2026)-----------------------
/* bool palindrome(int i, string&s)
{ int n = s.size();
  if(i>=n/2)return true ;
  if(s[i]!=s[n-i-1])return false ;
  return palindrome(i+1,s);


}

int main()
{
    string s ="madam";
    if (palindrome(0, s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
} */

//!-----------------------------Multiple_recursion_call(27-1-2026)-------------------
//?---------------------------fibonacci_number(addition_of_previous_two)----------------

/* int fibo(int n)
{
    if(n<=1)return n;
    int last=fibo(n-1);
    int seclast=fibo(n-2);
    return last+seclast;
}
int main()
{
    int n;
    cin >> n;
    cout<<fibo(n);
    return 0;
} */

//!-----------------------------subsequence(recursive can be done using  powerrset)----------------------
/*
void  subsec(int ind,  vector<int>& ds,int arr[], int n )
{

    if(ind==n)
    {
        for(auto it :ds)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    ds.push_back(arr[ind]);
    subsec(ind+1,ds,arr,n);
    ds.pop_back();
    subsec(ind+1,ds,arr, n);
}




int main()
{

    int arr[]={3,1,2};
    int  n =3;

    vector<int> ds;

    subsec(0,ds ,arr, n);

return 0;
} */

//!-------------------------printing_subeqence_whose_sum_is_k----------------------------
/* 
void prints(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{

    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];

    prints(ind + 1, ds, s, sum, arr, n);

    s -= arr[ind];
    ds.pop_back();

    prints(ind + 1, ds, s, sum, arr, n);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    prints(0, ds, 0, sum, arr, n);

    return 0;
} */

//&-------------------------------------------------------------

void prints(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{

    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);


    
    s += arr[ind];

    prints(ind + 1, ds, s, sum, arr, n);

    s -= arr[ind];
    ds.pop_back();

    prints(ind + 1, ds, s, sum, arr, n);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    prints(0, ds, 0, sum, arr, n);

    return 0;
} 