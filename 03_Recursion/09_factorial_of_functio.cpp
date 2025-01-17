#include<iostream>
using namespace std;
int fact(int n )
{
    if (n==0)

    {
     return (1);
    }
    else
    {
        return fact(n-1)*n;
    }
}


int Ifact(int n)
{
    int f=1;
    int i;
    for(i=1;i<=n;i++)
    
        f=f*i;
        return f;
    
}
int main ()
{
    cout << Ifact(4)<<endl;
    cout<<fact(4);
    return 0;
}