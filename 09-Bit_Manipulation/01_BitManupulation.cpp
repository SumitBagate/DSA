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
/* 
int BinaryToDecimal(string n)
{
    int len=n.size();
    int res =0;
    int  p2 =1;
   for(int i=len-1;i>=0;i--){
         if(n[i]=='1'){
          res =res+p2;
        }
        p2 =p2*2;
   }

   return res;
     
}

int main()
{ string n;
    cin>>n;
    cout<<BinaryToDecimal(n);
return 0;
} */

//!------------------swap_two_numbers-------------------------

#include<iostream>
using namespace std;

int swap(int a ,int b){
 
  a=a^b;
  b=a^b;
  a=a^b;

  cout<<a<<" "<<b<<" ";
}


int main()
{  int a ;
  int b ;
  cout <<"enter a";
  cin>>a ;
  cout<<"enter b";
  cin>>b;

  swap(a,b);
return 0;
}