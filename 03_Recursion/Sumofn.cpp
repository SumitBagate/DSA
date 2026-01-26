#include <bits/stdc++.h> 

using namespace std;
// int sum(int n)
// {
//     if(n==0) return 0 ;
//      return n+sum(n-1);

// }

int cnt = 0;
void fun(int i,int  N)
{

   //print n to 1

   if (i<1)
    return;
    cout<<i;
   fun(i-1,N);
    
    


   //base condition 
   // if(cnt==5)
   //  return 0;
   
   // cnt++;
   // cout<<cnt;
   // fun();
}

int main()
{  int i ;
   int N;
   cin>>N;
   cin>>i;

   fun(i ,N);



// int fact( int n)
// {
//     if(n==0) return 1;
//     return n*fact(n-1);
// }

// int main()
// {  int n;
//    cin>>n;
// //    cout<<sum(n);
//    cout<<fact(n);
   return  0;
}