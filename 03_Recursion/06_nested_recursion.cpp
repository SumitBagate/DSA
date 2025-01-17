#include<iostream>
#include<stdio.h>
using namespace std;


int funA(int n)
{

if (n>100)

   
      return n-10;
    return funA(funA(n+11));

}

 

 int main()
 {    int r;
     r=funA(30);
    cout<<r;
    return 0;
 }
