#include <iostream>
#include <string>
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

//&----------------------------palindrome-----------------------
bool palindrome(int i, string&s)
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
}