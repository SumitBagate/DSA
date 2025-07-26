#include<iostream>
using namespace std;
int main()
{    int x;
       int reverse=0;
       cout<<"enter x:-" ;
           cin>>x;

    if(x<0)
    {
   return false;

    };
    while(x!=0)
    {  int remainder=x%10;
       int reverse=reverse*10+remainder;
       x=x/10;
       cout <<reverse;
    }


return 0;}