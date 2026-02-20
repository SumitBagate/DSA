#include<iostream>
#include <algorithm>
using namespace std;



//!----------------------decimal to  binary  conversion-------------------
/* string result="";
string DecimalToBinary(int n)
{
  while(n>0)
  {
    if(n%2==1) result +="1";
      else result += "0";
    n=n/2; 

  }
   reverse(result.begin(), result.end());
   return result;

}

int main()
{   
    int n;
    cin>>n;
    cout<<DecimalToBinary(n);
return 0;} */


//!-----------------------------Binary to decimal---------------------------------

int BinaryToDecimal(string n)
{
    int len=n.size();
    int res =0;
   for(int i=0;i<len;i++){
      1 res =res*2+(n[i]-'0');
   }
   return res;
     
}

int main()
{ string n;
    cin>>n;
    cout<<BinaryToDecimal(n);
return 0;
}